/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:00:30 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/17 20:51:47 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_num	*lstnew(int content)
{
	t_num	*node;

	node = (t_num *)malloc(sizeof(t_num));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}

int	lstsize(t_num *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_num	*lstlast(t_num *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	lstclear(t_num **lst)
{
	t_num	*current;

	if (!lst)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = current->next;
		free(current);
	}
}

void	lstadd_back(t_num **lst, t_num *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		lstlast(*lst)->next = new;
}
