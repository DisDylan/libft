/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:32:38 by dpoinsu           #+#    #+#             */
/*   Updated: 2020/11/17 12:28:20 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (ft_isdigit((nptr[i])))
	{
		value *= 10;
		value += nptr[i] - 48;
		i++;
	}
	return (value);
}
