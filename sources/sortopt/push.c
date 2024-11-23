/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:24 by daxferna          #+#    #+#             */
/*   Updated: 2024/11/14 19:29:39 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	push(t_list **stack_1, t_list **stack_2, char *movement) //push a (st_a, st_b, "pa") push b (st_b, st_a, "pb")
{
	t_list	*tmp;

	if (!stack_2)
		return (false);
	tmp = *stack_1;
	*stack_1 = *stack_2;
	*stack_2 = (*stack_2)->next;
	(*stack_1)->next = tmp;
	printf("%s\n", movement);
	return (true);
}