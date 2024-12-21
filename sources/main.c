/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:10:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/21 00:55:17 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_num	*stack_a;
	t_num	*stack_b;

	if (argc <= 1)
		exit(0);
	stack_a = NULL;
	stack_b = NULL;
	if (!ft_parse(argc, argv, &stack_a)) // Initialize stack_a
		ft_error(stack_a, stack_b);
	if (ft_repeated(stack_a)) // Check repeated
		ft_error(stack_a, stack_b);
	if (ft_sort(stack_a, stack_b)) // Sort radix
		ft_error(stack_a, stack_b);
	lstclear(&stack_a);
	lstclear(&stack_b);
	return (0);
}
