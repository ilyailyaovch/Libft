/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaplha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:51:24 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/10 20:06:14 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int symb)
{
	return (((symb >= 'a') && (symb <= 'z')) || ((symb >= 'A') && (symb <= 'Z')));
}
