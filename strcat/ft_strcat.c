/*Cette fonction permet de rajouter à une chaîne de caractères déjà existante le contenu d'une seconde.
Autrement dit de concaténer les contenu de deux chaînes de caractères,
mais le résultat sera stocké dans la première chaîne passé en paramètre (aucune nouvelle chaîne ne sera produite)*/

#include <stdlib.h>
#include <stdio.h>

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

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = ft_strlen(dest);
    j = 0;
    while (src[j] != '\0')
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

    printf("%s\n", ft_strcat(argv[1], argv[2]));
}