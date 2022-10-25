/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:46:27 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:46:29 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    
    while (*str != '\0')
    {
        if (c == *str)
            return ((char*)str);
    str++;
    }
    return (NULL);
}

int main(void)
{
    const char    str[50] = "Je vais a la boulangerie";

    printf("%s\n", ft_strchr(str, 'w'));
    printf("%s\n", strchr(str, 'w'));
}