/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:42:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/13 15:43:20 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_error(t_num *stack_a, t_num *stack_b)
{
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void ft_alreadysorted(t_num *stack_a, t_num *stack_b)
{
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	exit(0);
}
