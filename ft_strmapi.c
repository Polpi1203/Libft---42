/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:43:09 by polpi             #+#    #+#             */
/*   Updated: 2022/11/02 18:07:56 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (0);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	const char	*test;

	test = "Je vais a la boulangerie";

	printf("%s\n", ft_strmapi(test, &f));

}

char	f(unsigned int k, char c)
{
	k = 0;
	k = c;
	c = k;
	return(c);
}
*/