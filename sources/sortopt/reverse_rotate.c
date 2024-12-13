/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:44:51 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/13 15:41:30 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_num	*ft_penultimate(t_num *stack)
{
	t_num	*tmp;

	tmp = stack;
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}

bool	rev_rotate(t_num **stack_a, char *movement)
{
	t_num	*tmp;
	t_num	*last;

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

bool	rrr(t_num *stack_a, t_num *stack_b)
{
	if (!rrotate(&stack_a, NULL) || !rrotate(&stack_b, NULL))
		return (false);
	write(1, "rrr\n", 4);
}
