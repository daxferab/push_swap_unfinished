/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:27:19 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/21 00:32:50 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	swap(t_num **stack, char *movement)
{
	t_num	*tmp;

	if (lstsize(*stack) <= 1)
		return (false);
	tmp = (*stack)->next;
	*stack = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
	if (movement)
		ft_printf("%s\n", movement);
	return (true);
}

bool	ss(t_num *stack_a, t_num *stack_b)
{
	if (!swap(&stack_a, NULL) || !swap(&stack_b, NULL))
		return (false);
	return (write(1, "ss\n", 3), true);
}
