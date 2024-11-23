/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:44:05 by daxferna          #+#    #+#             */
/*   Updated: 2024/11/18 19:56:54 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	rotate(t_list **stack, char *movement)
{
	t_list	*tmp;

	if (ft_lstsize(stack) <= 1)
		return (false);
	tmp = ft_lstlast(&stack);
	tmp->next = *stack;
	stack = (*stack)->next;
	tmp->next->next = NULL;
	if (movement)
		printf("%s\n", movement);
}

bool	rr(t_list *stack_a, t_list *stack_b)
{
	if (!rotate(&stack_a, NULL) || !rotate(&stack_b, NULL))
		return (false);
	write(1, "rr\n", 3);
}
