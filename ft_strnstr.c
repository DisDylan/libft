/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:22:45 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/19 11:50:23 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big)
		return (NULL);
	if (!little)
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		while (big[i] && little[i] &&
				i < len && big[i] == little[i])
			i++;
		return ((char*)(big + i));
	}
	return (NULL);
}
