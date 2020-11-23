/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:33:58 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/23 16:14:04 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *str;

	str = (void*)malloc(nmemb*size);
	if (!str)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		str = (void*)malloc(sizeof(str));
		return (str);
	}
	ft_bzero(str, nmemb);
	return (str);
}
