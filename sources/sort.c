/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:29 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/05 17:21:06 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	ft_is_sorted(t_list *stack_a) //TODO: function
{
	t_list	*current;

	current = stack_a;
	while (current->next)
	{
		if (*(int *)current->content > *(int *)current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

bool	ft_sort(t_list *stack_a, t_list *stack_b)
{
	if (ft_is_sorted(stack_a))
		ft_sorted(stack_a, stack_b);
	
}
