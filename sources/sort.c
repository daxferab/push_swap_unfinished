/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:29 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/13 16:53:24 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_is_sorted(t_num *stack_a) //TODO: function
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
	if (ft_is_sorted(stack_a))
		ft_alreadysorted(stack_a, stack_b);
	return (0);
}
