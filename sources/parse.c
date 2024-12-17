/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:07:43 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/18 00:41:21 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


bool	ft_addtolist(t_num **stack_a, char	*num)
{
	t_num	*new_node;
	int		*numint;
	numint = malloc(sizeof(int));
	if (ft_imprvatoi(num, numint) == 0) // Comprobar que esta entre minint y maxint y pasar a int
		return (free(numint), 0);
	new_node = lstnew(*numint); // Crear nuevo nodo
	free(numint);
	if (!new_node)
		return (0);
	lstadd_back(stack_a, new_node); // Agregar nodo a la lista
	return (1);
}

bool	ft_parse(int argc, char **argv, t_num **stack_a)
{
	char	**splitted_args;
	int		i;
	int		j;

	i = 1;
	//TODO: Check args "", "  "...
	while (i < argc) // Recorrer cada argumento
	{
		splitted_args = ft_split(argv[i++], ' '); // Split de cada argumento
		if (splitted_args == NULL)
			return (0);
		j = 0;
		while (splitted_args[j]) // Recorrer cada argumento splitteado
		{
			if (!ft_addtolist(stack_a, splitted_args[j])) // Comprobar int y no repetido y agregar a lista
				return (free(splitted_args), 0);
			j++;
		}
		free(splitted_args);
	}
	return (1);
}
