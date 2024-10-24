/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:07:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/10/22 22:03:22 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	ft_parse(int argc, char *argv)
{
	t_list	*stack_a;
	char	**splitted;
	int		i;
	int		j;
	int		number;

	i = 1;
	while (i < argc)
	{
		splitted = ft_split(argv[i++], ' ');
		j = 0;
		while (splitted[j++])
		{
			number = ft_atoi(splitted[j]);
			ft_lstadd_back(&stack_a, ft_lstnew(number));
		}
	}
	return (stack_a);
}
