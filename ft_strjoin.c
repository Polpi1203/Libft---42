/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:22:13 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 20:13:45 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		len_real;

	i = 0;
	j = 0;
	len_real = (ft_strlen(s1) + ft_strlen(s2));
	result = (char *)malloc(sizeof (char) * (len_real + 1));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strjoin(argv[1], argv[2]));
}
*/