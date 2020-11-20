/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:57:39 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/18 15:08:46 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(str) * size)))
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1));
	ft_strlcat(str, s2, size);
	return (str);
}
