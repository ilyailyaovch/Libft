/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:03:53 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:03:53 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	coun_d;
	size_t	coun_all;

	coun_d = 0;
	coun_all = 0;
	while ((dst[coun_all] != '\0') && (coun_all < size - 1))
		coun_all++;
	coun_d = coun_all;
	while ((src[coun_all - coun_d] != '\0') && (coun_all < size - 1))
	{
		dst[coun_all] = src[coun_all - coun_d];
		coun_all++;
	}
	while (coun_all < size)
	{
		dst[coun_all] = '\0';
		coun_all++;
	}
	return (ft_strlen(dst));
}
