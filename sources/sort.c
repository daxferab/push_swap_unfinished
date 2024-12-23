/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:29 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/23 05:00:30 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_num *stack_a, t_num *stack_b)
{
	check_sorted(stack_a, stack_b);
	if (less_than_five(stack_a, stack_b))
		return ;
	ksort_first(&stack_a, &stack_b, lstsize(stack_a));
	ksort_second(&stack_a, &stack_b, lstsize(stack_b));
}
