/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:07:40 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/17 21:20:39 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"

//list declaration
typedef struct s_num
{
	int				content;
	struct s_num	*next;
}	t_num;


//errors.c
void		ft_error(t_num *stack_a, t_num *stack_b);
void		ft_alreadysorted(t_num *stack_a, t_num *stack_b);
bool		ft_repeated(t_num *stack_a);

//lst_utils.c
t_num		*lstnew(int content);
int			lstsize(t_num *lst);
t_num		*lstlast(t_num *lst);
void		lstadd_back(t_num **lst, t_num *new);
void		lstclear(t_num **lst);

//parse.c
bool		ft_parse(int argc, char **argv, t_num **stack_a);
bool		ft_addtolist(t_num **stack_a, char *num);

//sort.c
bool		ft_is_sorted(t_num *stack_a);
bool		ft_sort(t_num *stack_a, t_num *stack_b);

//utils.c
int			ft_isnum(char *str);
bool		ft_imprvatoi(char *str, int *num);

//sortopt:

//	swap.c
bool		swap(t_num **stack, char *movement);
bool		ss(t_num *stack_a, t_num *stack_b);

//	push.c
bool		push(t_num **stack_1, t_num **stack_2, char *movement);

//	rotate.c
bool		rotate(t_num **stack, char *movement);
bool		rr(t_num *stack_a, t_num *stack_b);

//	reverse_rotate.c
t_num		*ft_penultimate(t_num *stack);
bool		rev_rotate(t_num **stack_a, char *movement);
bool		rrr(t_num *stack_a, t_num *stack_b);

#endif
