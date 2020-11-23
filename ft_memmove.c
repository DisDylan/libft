/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:51:26 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/23 14:19:08 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (str1 > str2)
		while (i < n)
		{
			str1[n - 1] = str2[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	return (dest);
}
