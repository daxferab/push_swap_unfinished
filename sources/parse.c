/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:19:36 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/22 19:40:41 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_list(t_num **stack_a)
{
	t_num	*tmp1;
	t_num	*tmp2;

	tmp1 = *stack_a;
	while (tmp1)
	{
		tmp2 = *stack_a;
		while (tmp2)
		{
			if (tmp1->content > tmp2->content)
				tmp1->index++;
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

bool	addtolist(t_num **stack_a, char *num)
{
	t_num	*new_node;
	int		*numint;

	numint = malloc(sizeof(int));
	if (!numint)
		return (false);
	if (imprvatoi(num, numint) == 0)
		return (free(numint), false);
	new_node = lstnew(*numint);
	free(numint);
	if (!new_node)
		return (false);
	lstadd_back(stack_a, new_node);
	return (true);
}

bool	parse(int argc, char **argv, t_num **stack_a)
{
	char	**splitted_args;
	int		i;
	int		j;

	i = 1;
	while (i < argc) // Recorrer cada argumento
	{
		splitted_args = ft_split(argv[i++], ' '); // Split de cada argumento
		if (splitted_args == NULL || splitted_args[0] == NULL)
			return (0);
		j = 0;
		while (splitted_args[j]) // Recorrer cada argumento splitteado
			if (!addtolist(stack_a, splitted_args[j++])) // Comprobar int y no repetido y agregar a lista
				return (freesplit(splitted_args), 0);
		freesplit(splitted_args);
	}
	index_list(stack_a);
	return (1);
}
