/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   radix.c											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: daxferna <daxferna@student.42madrid.com	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/12/18 00:37:44 by daxferna		  #+#	#+#			 */
/*   Updated: 2024/12/20 23:55:24 by daxferna		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_biggest_digit(t_num *stack_a)
{
	int	biggest_digit;
	int	aux;

	biggest_digit = 0;
	while (stack_a)
	{
		aux = ft_numlen(stack_a->content);
		if (aux > biggest_digit)
			biggest_digit = aux;
		stack_a = stack_a->next;
	}
	return (biggest_digit);
}

void ft_radix_algo(t_num *stack_a, t_num *stack_b)
{
	int		biggest_digit;
	int		digit_pos;
	int		size;
	t_num	*current;

	biggest_digit = ft_biggest_digit(stack_a);
	digit_pos = 0;
	while (digit_pos < biggest_digit)
	{
		size = lstsize(stack_a);
		while (size-- > 0)
		{
			current = stack_a;
			stack_a = stack_a->next;
			if (get_digit(current->content, digit_pos) % 2 == 0)
				push(&stack_b, &current, "pb");
			else
				push(&stack_a, &stack_b, "pa");
		}
		while (stack_b)
			push(&stack_a, &stack_b, "pa");
		digit_pos++;
	}
}
