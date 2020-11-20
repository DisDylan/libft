/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:33:58 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/18 11:01:56 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!(str = (void *)malloc(nmemb * size)))
		return (NULL);
	ft_bzero(str, nmemb);
	return (str);
}
