/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:29 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/22 04:14:49 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_num *stack_a, t_num *stack_b)
{
	check_sorted(stack_a, stack_b);
	if (less_than_five(stack_a, stack_b))
		return ;
	// TODO: call sorting algorithm
}
