/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:04:00 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:04:00 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *str1, const char *str2, size_t num )
{
	size_t	coun;
	int		flag;

	coun = 0;
	while (coun < num)
	{
		if (str1[coun] == str2[coun])
			flag = 0;
		else
			return (str1[coun] - str2[coun]);
		coun++;
	}
	return (flag);
}
