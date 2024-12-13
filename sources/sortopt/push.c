/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:24 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/13 15:41:20 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	push(t_num **stack_1, t_num **stack_2, char *movement) //push a (st_a, st_b, "pa") push b (st_b, st_a, "pb")
{
	t_num	*tmp;

	if (!stack_2)
		return (false);
	tmp = *stack_2;
	stack_2 = (*stack_2)->next;
	tmp->next = *stack_1;
	*stack_1 = tmp;
	printf("%s\n", movement);
	return (true);
}
