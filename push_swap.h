/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:07:40 by daxferna          #+#    #+#             */
/*   Updated: 2024/11/14 19:47:35 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"

//parse.c
bool		ft_parse(int argc, char **argv, t_list *stack_a);
bool		ft_addtolist(t_list *stack_a, char *num);

//utils.c
int			ft_isnum(char *str);
bool		ft_imprvatoi(char *str, int *num);

//errors.c
void		ft_error(t_list *stack_a, t_list *stack_b);
void		ft_alreadysorted(t_list *stack_a, t_list *stack_b);

//sortopt:
//	sort.c
bool		ft_is_sorted(t_list *stack_a);
bool		ft_sort(t_list *stack_a, t_list *stack_b);

//	swap.c
bool		swap(t_list **stack, char *movement);
bool		ss(t_list *stack_a, t_list *stack_b);

//	push.c
bool		push(t_list **stack_1, t_list **stack_2, char *movement);

//	rotate.c
bool		rotate(t_list **stack, char *movement);
bool		rr(t_list *stack_a, t_list *stack_b);

//	reverse_rotate.c
bool		rev_rotate(t_list **stack_a, char *movement);
bool		rrr(t_list *stack_a, t_list *stack_b);

#endif
