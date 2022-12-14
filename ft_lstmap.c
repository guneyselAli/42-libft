/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:48:43 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/14 19:50:55 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{	
	t_list	*first_node;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);

	first_node = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp)
			ft_lstadd_back(&first_node, tmp);
		else
		{
			ft_lstclear(&first_node, del);
			return(0);
		}
		lst = lst->next;
	}
	return (first_node);
}
