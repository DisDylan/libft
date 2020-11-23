/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/23 10:23:29 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	swap;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		swap = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = swap;
		i++;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
