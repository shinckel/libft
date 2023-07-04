# Libft
This project was developed for 42 school. For comprehensive information regarding the requirements, please consult the PDF file in the subject folder of the repository. Furthermore, I have provided my notes and a concise summary below.
```diff
+ libft
+ data structure, linked lists
+ recap what was studied during Piscine
```
_Mindmap BITS(shinckel, 2023)_
![mind-map_bits](https://github.com/shinckel/exams42/assets/115558344/9edd1f6c-6e4b-45f9-ba60-292ff1faa5e6)

_Mindmap LINKED LISTS(shinckel, 2023)_
![mind-map_linked-lists](https://github.com/shinckel/exams42/assets/115558344/b6112bf9-7b11-455d-84fd-48bfaade0856)

## High-Level Overview
_Building lists according to [Stanford CS Education Library, page 12](http://cslibrary.stanford.edu/103/LinkedListBasics.pdf)_
<img width="808" alt="Screenshot 2023-06-23 at 6 18 39 PM" src="https://github.com/shinckel/exams42/assets/115558344/c571da28-fb57-48c4-97da-1310939f1449">

 1. `void push(t_list **head, int data)` takes a list and a data value;
 2. `node = (t_list *)malloc(sizeof(t_list));` `node->data = data;` creates a new link with the given data and pushes it onto the front of the list `node->next = *head;`;
 3. `head = node;` the list is not passed in by its head pointer...
 4. `*head = node;` instead the list is passed in as a "reference" pointer to the head pointer -- this allows us to modify the caller's memory.
<hr>

_Adding nodes to the tail through Local Reference according to [Stanford CS Education Library, page 20](http://cslibrary.stanford.edu/103/LinkedListBasics.pdf)_
<img width="760" alt="Screenshot 2023-06-24 at 1 15 34 PM" src="https://github.com/shinckel/exams42/assets/115558344/a3e32fb5-d1ca-413c-b77e-424b7b6d92df">

```c
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/* 
 * what is the size of the list?
 * iterate over the list with a local pointer(tmp)
 * test the case in which head == NULL
 * return the list by passing the head pointer
 */
int size_list(t_list *head) {
  t_list *tmp;
  int count;

  count = 0;
  tmp = head;
  while (tmp != NULL)
 {
    count++;
    tmp = tmp->next;
 }
  return (count);
}

/* 
 * I need it to be able to change some of the caller's memory — namely the head
 * variable in heap. NOT AS A LOCAL VALUE, BUT UPDATE MEMORY
 * solution - pointer to a struct node(**)... that is why the double pointer
 * void push(&t_list **head, int data) - this would pass a copy of the   
 * head pointer instead, changing nothing in memory 
 */
void push(t_list **head, int data) {
   t_list *node;
 
   node = (t_list *)malloc(sizeof(t_list));
   node->data = data;
   node->next = *head;
   *head = node;
}

void print_list(t_list *head) {
   t_list *current = head;
   while (current != NULL) {
   printf("%d ", current->data);
   current = current->next;
  }
   printf("\n");
}

/* it is a reference pointer too */
void changetoNULL(t_list **head) {
   *head = NULL;
}

t_list *add_at_head(void) {
   t_list *head = NULL;
   int i = 1;
   while (i < 6)
  {
     push(&head, i);
     i++;
  }
   return (head);
}

/*
 * This is just a special case of the general rule 
 * to insert or delete a node inside a list, you need a pointer to the node
 * just before that position, so you can change its .next field!
 * HEAD POINTER adds the first, then TAIL POINTER adds the rest
 */
t_list *add_at_tail() {
   t_list *head = NULL;
   t_list *tail;
   int i;

 // deal with head, then set the tail pointer
   push(&head, 1);
   tail = head;
 // do all other nodes using tail
   i = 2;
   while (i < 17)
  {
     push(&tail->next, i);
     tail = tail->next;
     i++;
  }
   return (head);
}

/*
 * Option 02 is to add nodes to tail through (temporary)dummy nodes
 * the tail pointer plays the same role as in the previous example... 
 * ...the difference is that it now also handles the first node
 * Dummy Node -> Node1 -> Node2 -> Node3 -> NULL
 */
t_list *dummy_node() {
   t_list dummy;
   t_list *tail = &dummy;
   int i;

   dummy.next = NULL;
   i = 20;
   while (i < 30)
  {
     push(&tail->next, i);
     i++;
     tail = tail->next;
  }
   return (dummy.next);
}

/*
 * Option 03 adds a pointer to the last next pointer instead of last node
*/
t_list *reference_node() {
   t_list *head = NULL;
   t_list **lastREF = &head;
   int i = 0;

   while(i < 10)
  {
 // add node at the last pointer in the list
     push(lastREF, i);
 // advance to point to the new last pointer
     lastREF = &((*lastREF)->next);
     i++;
  }
   return (head);
}

int main(void) {
   t_list *head = NULL;
   t_list *head2;
 
   changetoNULL(&head2);
   push(&head2, 17);

   push(&head, 3);
   push(&head, 2);
   push(&head, 1);
   push(&head, 13);

   print_list(head);
   print_list(head2);
   printf("\nadd at head\n");
   print_list(add_at_head());
   printf("\nadd at tail - method1\n");
   print_list(add_at_tail());
   printf("\nadd at tail - method2\n");
   print_list(dummy_node());
   printf("\nadd at tail - method 03\n");
   print_list(reference_node());
   printf("\nlist size\n");
   printf("%i\n", size_list(head));
   return (0);
}
```
## Functions
### `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c) - checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c) - checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c) - checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c) - checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c) - checks for any printable character.
- [`ft_toupper`](ft_toupper.c) - convert char to uppercase.
- [`ft_tolower`](ft_tolower.c) - convert char to lowercase.
### `<string.h>`

- [`ft_memset`](ft_memset.c) - fill memory with a constant byte.
- [`ft_strlen`](ft_strlen.c) - calculate the length of a string.
- [`ft_bzero`](ft_bzero.c) - zero a byte string.
- [`ft_memcpy`](ft_memcpy.c) - copy memory area.
- [`ft_memmove`](ft_memmove.c) - copy memory area.
- [`ft_strlcpy`](ft_strlcpy.c) - copy string to an specific size.
- [`ft_strlcat`](ft_strlcat.c) - concatenate string to an specific size.
- [`ft_strchr`](ft_strchr.c) - locate character in string.
- [`ft_strrchr`](ft_strrchr.c) - locate character in string.
- [`ft_strncmp`](ft_strncmp.c) - compare two strings.
- [`ft_memchr`](ft_memchr.c) - scan memory for a character.
- [`ft_memcmp`](ft_memcmp.c) - compare memory areas.
- [`ft_strnstr`](ft_strnstr.c) - locate a substring in a string.
- [`ft_strdup`](ft_strdup.c) - creates a dupplicate for the string passed as parameter.

### `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c) - convert a string to an integer.
- [`ft_calloc`](ft_calloc.c) - allocates memory and sets its bytes' values to 0.

### Non-standard

- [`ft_substr`](ft_substr.c) - returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c) - concatenates two strings.
- [`ft_strtrim`](ft_strtrim.c) - trims the beginning and end of string with specific set of chars.
- [`ft_split`](ft_split.c) - splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c) - converts a number into a string.
- [`ft_strmapi`](ft_strmapi.c) - applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c) - applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c) - output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c) - output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c) - output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c) - output a number to a file descriptor.

### Linked list

- [`ft_lstnew`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstnew.c) - creates a new list element.
- [`ft_lstadd_front`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstadd_front.c) - adds an element(e.i.node) at the beginning of a list.
- [`ft_lstsize`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstsize.c) - counts the number of elements in a list.
- [`ft_lstlast`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstlast.c) - returns the address of the last node of the list.
- [`ft_lstadd_back`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstadd_back.c) - adds an element at the end of a list.
- [`ft_lstclear`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstclear.c) - deletes and free list, same as ft_lstdelone but here is **lst.
- [`ft_lstiter`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstiter.c) - applies a function to each element of a list.
- [`ft_lstmap`](https://github.com/shinckel/libft/blob/main/bonus/ft_lstmap.c) - same as lstiter, but creates and return a new list.
- [ft_lstdelone.c](https://github.com/shinckel/libft/blob/main/bonus/ft_lstdelone.c) - frees the memory of node's content (through function 'del').

## Concepts
| Task | Prototype | Description |
|:----|:-----:|:--------:|
| **`bitwise operators`**| `&` `^` `~` `<<` `>>` | also known as `bit operators` as they work at the bit-level. [IntroComputing about bits/ bytes](https://introcomputing.org/) |
| **`print_bits`** | `void print_bits(unsigned char octet)` | the bitwise operations treat the octet as a bit pattern and work on the binary representation of the value, regardless of its sign. Therefore, even if `octet` is an `unsigned char`, the function will perform with negative numbers, but relying on [implicit conversion](https://en.cppreference.com/w/c/language/conversion) in C |
| [Linked lists](http://cslibrary.stanford.edu/103/LinkedListBasics.pdf) |  | linked lists have been the domain where beginning programmers get the practice to really understand pointers. Store collections of data (elements), the same structure works to store elements of any type. [Linked Lists Problems](http://cslibrary.stanford.edu/105/LinkedListProblems.pdf), from [Stanford CS Education Library](http://cslibrary.stanford.edu/) |
| [Binary Trees](http://cslibrary.stanford.edu/110/BinaryTrees.pdf) | `struct node { int data; struct node* left; struct node* right; }` |  recursive pointer algorithms |
| **`Stack memory`** | x | pointers are automatically allocated when the function starts and deallocated when it exits. The heap allocated links will remain even though stack allocated pointers which were pointing to them have been deleted |
| **`Heap memory`** | x | it is not automatically deallocated when the creating function exists (e.g. malloc() returns `NULL` if it fails the request), source code needs to explicitly check for allocation failures and explicitally deallocate it in the end using `free()` |
| [Pointers and memory](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf) | | |
| **`Makefile`** | | [MIT example](http://web.mit.edu/biomorph/iap-c/slides/Makefile) |
