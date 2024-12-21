/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:29 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/21 00:13:25 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_sorted(t_num *stack_a)
{
	t_num	*current;

	current = stack_a;
	while (current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

bool	ft_sort(t_num *stack_a, t_num *stack_b)
{
	ft_checkSorted(stack_a, stack_b);
	//ft_lessThanFive(stack_a, stack_b);
	ft_radix_algo(stack_a, stack_b);
	return (0);
}
