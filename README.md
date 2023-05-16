![veneno_poster1](https://github.com/shinckel/libft42commented/assets/115558344/8a3d001b-c4d5-41cd-bf39-4c77a9268e36)

# Guidelines
- This is a project from the 42 school. We had to create our own library from scratch, based on...;
- My comments are organized by line of code (please, open the desired solution and check the comments with the correspondent line);  

## [ft_atoi.c](https://github.com/shinckel/libft42commented/blob/main/ft_atoi.c)
- <stdlib.h> convert a string to an integer;
- (22)first, solve the space problem (jump it);
- (24)then, turn the value of sign negative if the found symbol is minus;
- (26)jump the symbol;
- (28)when finding characters that correspond to numbers;
- (30)transform it into integer(*str - '0') and add it to its decimal(res * 10);
- (30)e.g."1234", 1000 + 200 + 30 + 4;

## [ft_calloc.c](https://github.com/shinckel/libft42commented/blob/main/ft_calloc.c)
- <stdlib.h> allocates memory and sets its bytes' values to 0;
- dynamic memory allocation change the size of a data structure in runtime;
- calloc stands for contiguous allocation, it has two differences from malloc;
- (difference one) initializes each block with a default value 0;
- (difference two) it has two arguments (malloc has just one);
- if space is insufficient, alocation fails (returns NULL);
- (15)(size_t count)how many blocks, (size_t size) size of each block;
- the content of these blocks will be zero initiated;
- better to use malloc(faster) than calloc(just in cases zero initiated);

## [ft_itoa.c](https://github.com/shinckel/libft42/blob/main/ft_itoa.c)
- <non-standard> converts a number into a string;
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

## [ft_lstadd_back.c](https://github.com/shinckel/libft42/blob/main/ft_lstadd_back.c) 
- <linked list> adds an element at the end of a list;
- lst = the address of a pointer to the first link of the list;
- new = the address of a pointer to the node to be added to the list;
- adds the node "new" at the end of the list, return none;
- (18)no return, so it is empty (just as a break);
- (21)if the list is empty, 'new' will assume the position;
- (27)unlike ft_lstadd_front, you don't need to assign *lst back(*lst = new);
- ...because 'new' is the final node! so you must link it just once;

## [ft_lstadd_front.c](https://github.com/shinckel/libft42/blob/main/ft_lstadd_front.c)
- <linked list> adds an element(e.i.node) at the beginning of a list;
- lst = the address of a pointer to the first link of a list; 
- new = the address of a pointer to the node to be added to the list;
- adds the node "new" at the begging of the list;
- (18)no return, so it is empty (just as a break);
- (20)update the link part of *new(otherwise, it is NULL)...;
- (21)now, the *lst pointer needs to be linked to *new;
- important to keep this order, or you will loose the lst original position;

## [ft_lstclear.c](https://github.com/shinckel/libft42/blob/main/ft_lstclear.c)
- <linked list> deletes and free list, same as ft_lstdelone but here is **lst;
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

 ## [ft_lstdelone.c](https://github.com/shinckel/libft42/blob/main/ft_lstdelone.c)
 - <linked list> frees the memory of node's content (through function 'del');
 - lst = the node to free, del = function address used to delete the content;
 - takes a node as parameter and frees the memory of its content using 'del';
 - the memory of 'next' must not be freed;
 - return none, external function void free(void *ptr);
 - if there are more nodes = find the previous node of the one to be deleted;
 - ...change the 'next' of the previous node...;
 - ...free memory for the node to be deleted;
