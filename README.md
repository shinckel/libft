<<<<<<< HEAD
=======
![veneno_poster1](https://github.com/shinckel/libft42commented/assets/115558344/86cde3e9-b28e-4a8b-8536-e0973902df5b)

>>>>>>> b3bc0efe59f2e292570bdec1d79e526ac384174a
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
<<<<<<< HEAD

## [ft_calloc.c] (https://github.com/shinckel/libft42commented/blob/main/ft_calloc.c)
- <stdlib.h> allocates memory and sets its bytes' values to 0;
- dynamic memory allocation change the size of a data structure in runtime;
- calloc stands for contiguous allocation, it has two differences from malloc;
- (difference one) initializes each block with a default value 0;
- (difference two) it has two arguments (malloc has just one);
- if space is insufficient, alocation fails (returns NULL);
- (15)(size_t count)how many blocks, (size_t size) size of each block;
- the content of these blocks will be zero initiated;
- better to use malloc(faster) than calloc(just in cases zero initiated);
=======
>>>>>>> b3bc0efe59f2e292570bdec1d79e526ac384174a
