/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/19 09:58:54 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int s)
{
	int t;

	t = 1;
	while (s >= 1)
	{
		s = s / 10;
		t++;
	}
	return (t);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	size_t	i;

	i = 0;
	size = get_size(n);
	if (!(str = (char *)malloc(sizeof(str) * (size))))
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (n > 0)
	{
		str[i] = n % 10;
		n /= 10;
		i++;
	}
	return (str);
}
