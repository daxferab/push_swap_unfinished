/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:07:40 by daxferna          #+#    #+#             */
/*   Updated: 2024/12/22 19:21:30 by daxferna         ###   ########.fr       */
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
	int				index;
	struct s_num	*next;
}	t_num;


//exceptions.c
void		error(t_num *stack_a, t_num *stack_b);
void		check_sorted(t_num *stack_a, t_num *stack_b);
bool		repeated(t_num *stack_a);

//lst_utils.c
t_num		*lstnew(int content);
int			lstsize(t_num *lst);
t_num		*lstlast(t_num *lst);
void		lstadd_back(t_num **lst, t_num *new);
void		lstclear(t_num **lst);

//parse.c
void		index_list(t_num **stack_a);
bool		addtolist(t_num **stack_a, char *num);
bool		parse(int argc, char **argv, t_num **stack_a);

//sort.c
bool		sorted(t_num *stack_a);
void		sort(t_num *stack_a, t_num *stack_b);

//sortToFive.c
int			first_num(t_num *stack);
void		sort_two(t_num *stack_a);
void		sort_three(t_num *stack_a);
void		sort_four(t_num *stack_a, t_num *stack_b);
void		sort_five(t_num *stack_a, t_num *stack_b);
bool		less_than_five(t_num *stack_a, t_num *stack_b);

//utils.c
int			isnum(char *str);
bool		imprvatoi(char *str, int *num);
void		freesplit(char **split);
bool		sorted(t_num *stack_a);

//sortopt:

bool		swap(t_num **stack, char *movement);
bool		ss(t_num *stack_a, t_num *stack_b);

bool		push(t_num **stack_1, t_num **stack_2, char *movement);

bool		rotate(t_num **stack, char *movement);
bool		rr(t_num *stack_a, t_num *stack_b);

t_num		*penultimate(t_num *stack);
bool		rev_rotate(t_num **stack_a, char *movement);
bool		rrr(t_num *stack_a, t_num *stack_b);

#endif
