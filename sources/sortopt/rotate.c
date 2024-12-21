/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:44:05 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/21 00:32:25 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	rotate(t_num **stack, char *movement)
{
	t_num	*tmp;

	if (lstsize(*stack) <= 1)
		return (false);
	tmp = *stack;
	lstlast(*stack)->next = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	if (movement)
		ft_printf("%s\n", movement);
	return (true);
}

bool	rr(t_num *stack_a, t_num *stack_b)
{
	if (!rotate(&stack_a, NULL) || !rotate(&stack_b, NULL))
		return (false);
	return (write(1, "rr\n", 3), true);
}
