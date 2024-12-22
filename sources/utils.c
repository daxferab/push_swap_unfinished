/* ************************************************************************** */
/*									  */
/*							:::	 ::::::::   */
/*   utils.c											:+:   :+:	:+:   */
/*						  +:+ +:+	   +:+	*/
/*   By: daxferna <daxferna@student.42madrid.com	+#+  +:+	   +#+	*/
/*						+#+#+#+#+#+   +#+	 */
/*   Created: 2024/11/05 22:13:56 by daxferna		#+#  #+#		  */
/*   Updated: 2024/12/20 23:56:05 by daxferna	   ###   ########.fr	*/
/*									  */
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

bool imprvatoi(char *str, int *num)
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

void freesplit(char **split)
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
