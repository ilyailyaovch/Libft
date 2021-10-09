/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:03:56 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:03:56 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	coun;

	coun = 0;
	while ((src[coun] != '\0') && (coun < size - 1))
	{
		dst[coun] = src[coun];
		coun++;
	}
	while (coun < size)
	{
		dst[coun] = '\0';
		coun++;
	}
	return (ft_strlen((char *)src));
}
