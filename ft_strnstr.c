/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:22:45 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/25 09:17:23 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) > ft_strlen(big))
		return (NULL);
	if (!little || (little[0] == '\0' && len == 0))
		return ((char*)big);
	if (little[0] == '\0' && big[0] == '\0')
		return ("\0");
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && i + j < len &&
				big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char*)big + i);
		i++;
	}
	return (NULL);
}
