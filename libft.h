/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:16:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 10:34:09 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strncpy(char *str, char *copy, int length);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t length);
char	*ft_strdup(char *str);
void	*ft_memset(void *str, int c, size_t size);
void	ft_bzero(void *str, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);


#endif