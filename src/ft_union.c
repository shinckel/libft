#include <unistd.h>
#include <stdio.h>

static int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

static char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    int j = ft_strlen(dest);

    while (src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int tab[255] = {0};
    char *str = ft_strcpy(argv[1], argv[2]);

    if (argc == 3)
    {
        while(str[j])
        {
            i = 0;
            k = 0;
            while(str[i])
            {
                if (str[j] == str[i])
                {
                     k += 1;
                     tab[i] = k;
                }
                i++;
            }
            j++;
        }
        i = 0;
        while(str[i])
        {
            if (tab[i] == 1)
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
