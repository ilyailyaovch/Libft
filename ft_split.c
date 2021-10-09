/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:38:41 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/08 21:38:41 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int 	ft_nb_st(char const *s, char c)
{
	unsigned int	coun;
	unsigned int	nb;

	coun = 0;
	nb = 0;
	if (!s)
		return (NULL);
	if (s[coun] && s[coun] == c)
		coun++;
	

}

char **ft_split(char const *s, char c)!!!!!!!!!!!!!!!!!!!!!!!!
{
	char			**str;
	unsigned int	nb_st;
	unsigned int	coun;

	if (!s)
		return (NULL);
	nb_st = ft_nb_st(s, c);

}