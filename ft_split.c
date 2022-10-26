/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:32:58 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 10:50:25 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	check(char p, char c)
{
	if (p == c)
		return (1);
	return (0);
}

int	size_array(char const *s, char c)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (check(s[i], c) == 1)
			size++;
		i++;
	}
	return (size);
}

char    **ft_split(char const *s, char c)
{
	char	**result;




	*result = (char **)malloc(sizeof(char*) * size_array(s, c) + 1);
	if (result == NULL)
		return (NULL);
	


}