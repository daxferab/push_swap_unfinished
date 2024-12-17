/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:13:56 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/17 23:07:54 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_isnum(char *str)
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

bool ft_imprvatoi(char *str, int *num)
{
    int sign = 1;
    int i = 0;
    long result = 0;

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
        result = result * 10 + (str[i] - '0');
        if (sign == 1 && result > INT_MAX)
            return (0);
        if (sign == -1 && -result < INT_MIN)
            return (0);
        i++;
    }
    *num = (int)(sign * result);
    return (1);
}
