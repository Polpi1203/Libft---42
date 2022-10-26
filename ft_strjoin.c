/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:22:13 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 10:25:04 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len_s1;
	int		len_s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = (char *)malloc(sizeof (char) * (len_s1 + len_s2));
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