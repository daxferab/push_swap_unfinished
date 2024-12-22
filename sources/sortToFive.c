/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortToFive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 00:15:04 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/22 19:29:26 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	first_num(t_num *stack)
{
	t_num	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		if (tmp->index == 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	sort_two(t_num *stack_a)
{
	if (stack_a->content > stack_a->next->content)
		swap(&stack_a, "sa");
}

void	sort_three(t_num *stack_a)
{
	int	first;

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

void	sort_four(t_num *stack_a, t_num *stack_b)
{
	
}

void	sort_five(t_num *stack_a, t_num *stack_b)
{
		// TODO: Implement function
}

bool	less_than_five(t_num *stack_a, t_num *stack_b)
{
	if (lstsize(stack_a) == 2)
		return (sort_two(stack_a), true);
	else if (lstsize(stack_a) == 3)
		return (sort_three(stack_a), true);
	else if (lstsize(stack_a) == 4)
		return (sort_four(stack_a, stack_b), true);
	else if (lstsize(stack_a) == 5)
		return (sort_five(stack_a, stack_b), true);
	return (false);
}
