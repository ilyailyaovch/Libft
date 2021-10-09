/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:49:01 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/08 17:49:01 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_char_in_set(char char_in_str, char const *set)
{
	unsigned int	coun;

	coun = 0;
	while (set[coun])
	{
		if (set[coun] == char_in_str)
			return (1);
		coun++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	coun;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while ((s1[start]) && (ft_is_char_in_set(s1[start], set) == 1))
		start++;
	while ((end > start) && (ft_is_char_in_set(s1[end], set) == 1))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[coun] = s1[start];
		coun++;
		start++;
	}
	str[coun] = '\0';
	return (str);
}
