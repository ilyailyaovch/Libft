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

static unsigned int	ft_nb_wd(char const *s, char c)
{
	unsigned int	coun;
	unsigned int	nb;

	coun = 0;
	nb = 0;
	while (s[coun] && s[coun] == c)
		coun++;
	while (s[coun])
	{
		if (s[coun] == c)
		{
			nb++;
			while (s[coun] == c)
				coun++;
			continue ;
		}
		coun++;
	}
	if (s[coun - 1] != c)
		nb++;
	return (nb);
}

static void	ft_str_small(char **s, unsigned int *len, char c)
{
	unsigned int	coun;

	coun = 0;
	*s += *len;
	*len = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[coun])
	{
		if ((*s)[coun] == c)
			return ;
		(*len)++;
		coun++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	nb_wd;
	unsigned int	coun;
	unsigned int	len_new;
	char			*str_new_start;

	coun = 0;
	str_new_start = (char *)s;
	len_new = 0;
	if (!s)
		return (NULL);
	nb_wd = ft_nb_wd(s, c);
	str = (char **)malloc(sizeof(char *) * (nb_wd + 1));
	if (!str)
		return (NULL);
	while (coun < nb_wd)
	{	
		ft_str_small(&str_new_start, &len_new, c);
		str[coun] = (char *)malloc(sizeof(char) * (len_new + 1));
		ft_strlcpy(str[coun], (const char *)str_new_start, len_new + 1);
		coun++;
	}
	return (str);
}
