/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:03:23 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:03:23 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	coun;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	if (dest >= src)
	{	
		coun = n;
		while (coun)
		{
			((unsigned char *)dest)[coun] = ((unsigned char *)src)[coun];
			coun--;
		}
	}
	else
	{
		coun = 0;
		while (coun < n)
		{
			((unsigned char *)dest)[coun] = ((unsigned char *)src)[coun];
			coun++;
		}
	}
	return (dest);
}
