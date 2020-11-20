/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:21:09 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/18 16:07:16 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_words(char *str, char charset)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (str[i] == charset)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strdupp(char *str, char charset)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
	{
		if (str[i] == charset)
			break ;
		i++;
	}
	if (!(dest = malloc(sizeof(dest) * (i + 1))))
		return (NULL);
	dest = ft_strncpy(dest, str, i);
	return (dest);
}

char		**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*)
					* count_words((char *)str, c) + 1)))
		return (NULL);
	while (str[i] && j < count_words((char *)str, c))
	{
		while (str[i] != c)
			i++;
		if (str[i] == c)
		{
			tab[j] = ft_strdupp((char *)str + i, c);
			j++;
		}
		while (str[i] != c)
			i++;
	}
	tab[j] = 0;
	return (tab);
}
