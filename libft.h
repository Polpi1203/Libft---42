#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_toupper(int c);
int     ft_tolower(int c);
char	*ft_strncpy(char *str, char *copy, int length);
int	    ft_strlen(char *str);
int	    ft_strlcat(char *dest, char *src, int length);
char	*ft_strdup(char *str);
void    *ft_memset(void *str, int c, size_t size);
int     ft_isprint(int c);
int	    ft_isdigit(int c);
int     ft_isascii(int c);
int	    ft_isalpha(int c);
int	    ft_isalnum(int c);




#endif