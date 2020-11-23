/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:36:11 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/23 14:16:51 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(dest + i) == (unsigned char)c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
