/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortToFive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 00:15:04 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/18 00:37:13 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_sortTwo(t_num *stack_a)
{
	if (stack_a->content > stack_a->next->content)
		swap(stack_a, 'sa');
	return (0);
}

int ft_sortThree(t_num *stack_a)
{
	//TODO: sortThree
}

int ft_sortFour(t_num *stack_a, t_num *stack_b)
{
	//TODO: sortFour
}

int ft_sortFive(t_num *stack_a, t_num *stack_b)
{
	//TODO: sortFive
}

int ft_lessThanFive(t_num *stack_a, t_num *stack_b)
{
	if (lstsize(stack_a) == 2)
		ft_sortTwo(stack_a);
	else if (lstsize(stack_a) == 3)
		ft_sortThree(stack_a);
	else if (lstsize(stack_a) == 4)
		ft_sortFour(stack_a, stack_b);
	else if (lstsize(stack_a) == 5)
		ft_sortFive(stack_a, stack_b);
	return (0);
}
