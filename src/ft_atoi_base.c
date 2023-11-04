#include <unistd.h>
#include <stdio.h>

char ft_tolower(char c)
{
    if (c <= 'Z' && c >= 'A')
        c += 32;
    return (c);
}
int digit(char c, int str_base)
{
    char *base = "0123456789abcdef";
    int i;
    i = 0;
    while(i < str_base)
    {
        if(c == base[i])
            return(i);
        i++;
    }
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(digit(ft_tolower(str[i]), str_base) >= 0)
    {
        res = res * str_base + digit(ft_tolower(str[i]), str_base);
        i++;
    }
    return (res * sign);
}