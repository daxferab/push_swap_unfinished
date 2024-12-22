/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:42:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/22 19:03:25 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(t_num *stack_a, t_num *stack_b)
{
	lstclear(&stack_a);
	lstclear(&stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

void	check_sorted(t_num *stack_a, t_num *stack_b)
{
	if (!sorted(stack_a))
		return ;
	lstclear(&stack_a);
	lstclear(&stack_b);
	exit (0);
}

bool	repeated(t_num *stack_a)
{
	t_num	*current;
	t_num	*next;

	current = stack_a;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (current->content == next->content)
				return (true);
			next = next->next;
		}
		current = current->next;
	}
	return (false);
}
