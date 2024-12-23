/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortToFive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 00:15:04 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/23 05:36:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_num *stack_a)
{
	if (stack_a->content > stack_a->next->content)
		swap(&stack_a, "sa");
}

void	sort_three(t_num *stack_a)
{
	int	first;

	if (sorted(stack_a))
		return ;
	first = first_num(stack_a);
	if (first == 0)
	{
		rotate(&stack_a, "ra");
		sort_two(stack_a);
		rev_rotate(&stack_a, "rra");
	}
	else if (first == 1)
	{
		rev_rotate(&stack_a, "rra");
		sort_two(stack_a);
		rev_rotate(&stack_a, "rra");
	}
	else
	{
		sort_two(stack_a);
		rev_rotate(&stack_a, "rra");
	}
}

void	sort_five(t_num *stack_a, t_num *stack_b)
{
	while (stack_a->index != 0 && stack_a->index != 1)
		rotate(&stack_a, "ra");
	push(&stack_b, &stack_a, "pb");
	while (stack_a->index != 0 && stack_a->index != 1)
		rotate(&stack_a, "ra");
	push(&stack_b, &stack_a, "pb");
	sort_three(stack_a);
	push(&stack_a, &stack_b, "pa");
	push(&stack_a, &stack_b, "pa");
	sort_two(stack_a);
}

bool	less_than_five(t_num *stack_a, t_num *stack_b)
{
	if (lstsize(stack_a) == 2)
		return (sort_two(stack_a), true);
	else if (lstsize(stack_a) == 3)
		return (sort_three(stack_a), true);
	else if (lstsize(stack_a) == 5)
		return (sort_five(stack_a, stack_b), true);
	return (false);
}
