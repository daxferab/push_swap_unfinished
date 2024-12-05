/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:44:51 by daxferna          #+#    #+#             */
/*   Updated: 2024/11/23 13:07:40 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_penultimate(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}

bool	rev_rotate(t_list **stack_a, char *movement)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(stack_a) <= 1)
		return (false);
	tmp = ft_penultimate(stack_a);
	last = ft_lstlast(stack_a);
	last->next = *stack_a;
	*stack_a = last;
	tmp->next = NULL;
	if (movement)
		printf("%s\n", movement);
}

bool	rrr(t_list *stack_a, t_list *stack_b)
{
	if (!rrotate(&stack_a, NULL) || !rrotate(&stack_b, NULL))
		return (false);
	write(1, "rrr\n", 4);
}
