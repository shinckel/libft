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