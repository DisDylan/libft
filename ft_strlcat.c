/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:52:55 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/20 21:35:57 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	len2 = ft_strlen(src);
	len1 = ft_strlen(dst);
	j = len1;
	i = 0;
	if (len1 < size - 1 && size > 0)
	{
		while (src[i] && len1 + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (len1 >= size)
		len1 = size;
	return (len1 + len2);
}
