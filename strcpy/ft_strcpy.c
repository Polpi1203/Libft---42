// Cette fonction permet de copier le contenu d'une chaîne de caractères dans une autre. Bien entendu, la chaîne de caractère devant recevoir
// le contenu de l'autre doit être allouée de manière à être suffisament grande pour contenir tout le texte.

#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *str, char *copy)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main(void)
{
    char str[50] = "Je vais à la boulangerie";
    char copy[50] = "";

    printf("%s\n", ft_strcpy(str, copy));
}