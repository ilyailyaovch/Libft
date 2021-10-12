/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap---.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:01:51 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/12 17:37:24 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*dest;
	int		len;

	if (!lst)
		return (NULL);
	len = ft_lstsize(lst);
	while (lst)
	{
		dest = (t_list *)malloc(sizeof(t_list) * len);
		if (!dest)
			return (NULL);
		while (dest)
		{
			dest -> content = f(lst -> content);
			dest = dest -> next;
		}
	}
}