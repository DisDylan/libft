/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:52:55 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/18 12:07:46 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t total;

	i = ft_strlen(dst);
	total = ft_strlen(src);
	total += i;
	j = 0;
	if (size > 0 && i < (size - 1))
	{
		while ((i + j) < (size - 1) && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
	}
	return (total);
}
