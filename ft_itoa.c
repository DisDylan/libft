/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/25 09:24:01 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(int n)
{
	long nb;

	nb = n;
	if (nb < 0)
		return (nb *= -1);
	return (nb);
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

static int	ft_count(int n)
{
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	is_neg = (n < 0);
	if (n == 0)
	{
		if (!(str = (char*)malloc(sizeof(*str) * 2)))
			return (NULL);
		return (ft_zero(str));
	}
	if (!(str = (char*)malloc(sizeof(*str) * ft_count(n) + is_neg)))
		return (NULL);
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[len++] = '-';
	str[len] = '\0';
	ft_strrev(str);
	return (str);
}
