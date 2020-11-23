/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:32:38 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/23 14:54:16 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		neg;
	int		i;
	long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i++] == '-')
		neg *= -1;
	else if (str[i] == '+')
		i++;
	while (str[i++] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i] - 48);
	num *= neg;
	if (num > 2147483647)
		return (-1);
	if (num < -2147483648)
		return (0);
	return (num);
}
