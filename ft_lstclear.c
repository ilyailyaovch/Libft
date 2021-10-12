/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:45:24 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/12 16:44:03 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	while (curr)
	{
		next = curr -> next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	*lst = NULL;
}
