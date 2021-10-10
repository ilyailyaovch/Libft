/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:20:38 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/08 14:20:38 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	coun;
	char			*dst;

	coun = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (coun < len)
	{
		dst[coun] = s[start];
		coun++;
		start++;
	}
	dst[coun] = '\0';
	return (dst);
}
