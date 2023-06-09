# Libft
This project was developed for 42 school. For comprehensive information regarding the requirements, please consult the PDF file in the subject folder of the repository. Furthermore, I have provided my notes and a concise summary below.
```diff
+ keywords: library
+ makefile
```
### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.
### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size.
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size.
- [`ft_strchr`](ft_strchr.c)	- locate character in string.
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string.
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](ft_strdup.c)	- creates a dupplicate for the string passed as parameter.
### Functions from `<stdlib.h>`

- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
```
- (22)first, solve the space problem (jump it);
- (24)then, turn the value of sign negative if the found symbol is minus;
- (26)jump the symbol;
- (28)when finding characters that correspond to numbers;
- (30)transform it into integer(*str - '0') and add it to its decimal(res * 10);
- (30)e.g."1234", 1000 + 200 + 30 + 4;
```
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.
```
- dynamic memory allocation change the size of a data structure in runtime;
- calloc stands for contiguous allocation, it has two differences from malloc;
- (difference one) initializes each block with a default value 0;
- (difference two) it has two arguments (malloc has just one);
- if space is insufficient, alocation fails (returns NULL);
- (15)(size_t count)how many blocks, (size_t size) size of each block;
- the content of these blocks will be zero initiated;
- better to use malloc(faster) than calloc(just in cases zero initiated);
```
### Non-standard functions

- [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
```
- n = the integer to convert;
- it returns the string representing the integer, or NULL if allocation fails;
- negative numbers must be handled;
- the first function solves the string len, the second how to assign each char;
- (static unsigned int)is a special variable, every call changes the value...;
- ...so, it keeps the variable updated until the execution is done;
- (static unsigned int)is a special function too(can be used only inside scope);
- (15)you must discover the nature of the number (size for allocating bytes);
- divide it by ten for discovering how many decimal positions;
- (42)you must solve zero, negative and positive scenarios;
- while n != 0, assign the remainder(modulo division) to the (len - 1) position;
- so the code writes each int, transformed into char (+ '0'), in reverse order;
```
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element(e.i.node) at the beginning of a list.
```
- lst = the address of a pointer to the first link of a list; 
- new = the address of a pointer to the node to be added to the list;
- adds the node "new" at the begging of the list;
- (18)no return, so it is empty (just as a break);
- (20)update the link part of *new(otherwise, it is NULL)...;
- (21)now, the *lst pointer needs to be linked to *new;
- important to keep this order, or you will loose the lst original position;
```
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast.c)	- returns the address of the last node of the list.
```
 - lst = the beginning of the list, the function returns the last list's node;
 - (19)it will compare the addresses! so the loop will run until it finds NULL;
 - (21)here you could add other line for adding a node to the end of the list;
 - ...(lst->next = temp;) where temp is the address for another node;
```
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
```
- lst = the address of a pointer to the first link of the list;
- new = the address of a pointer to the node to be added to the list;
- adds the node "new" at the end of the list, return none;
- (18)no return, so it is empty (just as a break);
- (21)if the list is empty, 'new' will assume the position;
- (27)unlike ft_lstadd_front, you don't need to assign *lst back(*lst = new);
- ...because 'new' is the final node! so you must link it just once;
```
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list, same as ft_lstdelone but here is **lst.
```
 - lst = the address of a pointer to a node;
 - del = the address of the function used to delete the content of the node;
 - return none, external function = void free(void *ptr);
 - deletes and frees the given node and every successor of that node...;
 - so, it deletes the whole single list!(**lst);
 - finally, the pointer to the list must be set to NULL;
 - remember, just as **lst, head is a pointer of pointers(array);
 - first, you will need two variables to assist your code...;
 - (aux)is the current node and (n)will be the temp for storing aux position;
 - (n)you have to store the address of the nodes somewhere...
 - ...so you can reach them even if the first node is deleted;
 - (23)it means that n is pointing to nothing...you are just initializing it;
 - (26)...then update head as being the second node position(n = aux->next);
 - ...and delete every node, knowing that 'n' has the next position stored;
 - (26)at the last loop, aux will be equal to NULL (n = aux->next = NULL);
 - (31)here, (*lst = NULL) works too, as you must reasign *lst to NULL;
 ```
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
```
 - lst = the address of a pointer to a node;
 - f = the address of the function used to iterate on the list;
 - return none, external functions none;
 - iterates the list 'lst', applying function 'f' on the content of each node;
 - traverse single linked list = visiting each node until the end node(NULL);
 - (22)works just as i++, each time the loop runs it changes node's position;
```
- [`ft_lstmap`](ft_lstmap.c)	- same as lstiter, but creates and return a new list.
```
 - lst = the address of a pointer to a node;
 - f = the address of the function used to iterate on the list;
 - del = the address of the function used to delete the content of a node;
 - it returns the new list, or NULL if allocation fails; 
 - external functions permitted(malloc, free);
 - creates a new list resulting of the successive application of 'f'...
 - ...the 'del' function is used to delete the content of a node if needed;
 - (21)don't forget: ft_lstnew needs one parameter of type content(lst->content);
 - (27)recursive function = calls itself for creating the next nodes;
 - or you can solve it with two variables(newlist = 0 and mem = ft_lstnew)...; 
 - for creating the nodes and then sending it to 'newlist'(using ft_lstaddback);
 - so 'newlist' is a blank canvas that receive nodes created through 'mem';
```
- [ft_lstdelone.c](ft_lstdelone.c) - frees the memory of node's content (through function 'del').
```
 - lst = the node to free, del = function address used to delete the content;
 - takes a node as parameter and frees the memory of its content using 'del';
 - the memory of 'next' must not be freed;
 - return none, external function void free(void *ptr);
 - if there are more nodes = find the previous node of the one to be deleted;
 - ...change the 'next' of the previous node...;
 - ...free memory for the node to be deleted;
 ```
