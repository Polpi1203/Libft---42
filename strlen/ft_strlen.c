// Retourner le nombre de caractère d'une chaine donnée !

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

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", ft_strlen(argv[1]));
}