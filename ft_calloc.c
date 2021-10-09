/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:22:34 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/07 22:22:34 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*buff;

	if (num == 0)
		return (NULL);
	buff = (void *)malloc(num * size);
	if (buff == NULL)
		return (NULL);
	ft_bzero(buff, (num * size));
	return (buff);
}
