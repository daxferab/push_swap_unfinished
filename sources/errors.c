/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:42:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/18 01:06:13 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_error(t_num *stack_a, t_num *stack_b)
{
	lstclear(&stack_a);
	lstclear(&stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

void ft_checkSorted(t_num *stack_a, t_num *stack_b)
{
	if (!ft_sorted(stack_a))
		return ;
	lstclear(&stack_a);
	lstclear(&stack_b);
	exit (0);
}

bool ft_repeated(t_num *stack_a)
{
	t_num *current;
	t_num *next;

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
