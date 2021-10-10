/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:03:02 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:03:02 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	sign;
	int	sbl;
	int	number;

	sign = 1;
	sbl = 0;
	number = 0;
	while (((str[sbl] >= 9) && (str[sbl] <= 13)) || (str[sbl] == ' '))
	{
		sbl++;
	}
	if ((str[sbl] == '-') || (str[sbl] == '+'))
	{
		if (str[sbl] == '-')
			sign *= (-1);
		sbl++;
	}
	while ((str[sbl] >= '0') && (str[sbl] <= '9'))
	{
		number *= 10;
		number += (str[sbl] - '0');
		sbl++;
	}
	return (sign * number);
}
