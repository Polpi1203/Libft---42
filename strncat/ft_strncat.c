

// Cette fonction permet d'ajouter les «n» premiers caractères de la chaine de caractères «str1» à la chaine de caractères «str2».

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strncat(char *dest, char *src, int length)
{
    int i;
    int j;

    i = ft_strlen(dest);
    j = 0;
    while (src[j] != '\0' && j < length)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
int main(int argc, char **argv)
{
    (void)argc;

    printf("%s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
}