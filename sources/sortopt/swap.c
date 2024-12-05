/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:27:19 by daxferna          #+#    #+#             */
/*   Updated: 2024/11/23 16:07:10 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	swap(t_list **stack, char *movement)
{
	t_list	*tmp;

	if (ft_lstsize(stack) <= 1)
		return (false);
	tmp = (*stack)->next;
	*stack = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
	if (movement)
		printf("%s\n", movement);
	return (true);
}

bool	ss(t_list *stack_a, t_list *stack_b)
{
	if (!swap(&stack_a, NULL) || !swap(&stack_b, NULL))
		return (false);
	write(1, "ss\n", 3);
}
