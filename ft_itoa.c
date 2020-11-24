/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:12 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/24 15:13:50 by dpoinsu          ###   ########.fr       */
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

static int	ft_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
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
	if (!(str = (char*)malloc(sizeof(*str) * ft_count(n) + is_neg)))
		return (NULL);
	if (n == 0)
	{
		if (!(str = (char*)malloc(sizeof(*str) * 2)))
			return (NULL);
		return (ft_zero(str));
	}
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
