/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/12 18:44:47 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/21 16:14:33 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*item;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		item = f(lst);
		if (!item)
		{
			ft_lstdel(&(head), &(ft_delete));
			return (NULL);
		}
		ft_lstadd_back(&head, item);
		lst = lst->next;
	}
	return (head);
}
