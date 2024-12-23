/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 01:59:23 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/23 05:37:26 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

bool	imprvatoi(char *str, int *num)
{
	int		sign;
	int		i;
	long	res;

	sign = 1;
	i = 0;
	res = 0;
	*num = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
		if (!str[i])
			return (0);
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		res = res * 10 + (str[i++] - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && -1 * res < INT_MIN))
			return (0);
	}
	*num = (int)(sign * res);
	return (1);
}

void	freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

bool	sorted(t_num *stack_a)
{
	t_num	*current;

	current = stack_a;
	while (current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

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
