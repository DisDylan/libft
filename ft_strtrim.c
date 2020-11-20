/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:11:43 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/18 15:19:31 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!(str = (char *)malloc(sizeof(str) * ft_strlen(s1))))
		return (NULL);
	while (s1[i])
	{
		while (s1[i] != set[j])
			j++;
		if (j == ft_strlen(set))
		{
			str[k] = s1[i];
			k++;
		}
		j = 0;
		i++;
	}
	return (str);
}
