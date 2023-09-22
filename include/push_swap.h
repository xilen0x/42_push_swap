/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:14:12 by castorga          #+#    #+#             */
/*   Updated: 2023/09/04 15:14:15 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
/*# include <string.h>
# include <stdio.h>
# include <errno.h>*/

// ------------------------ Struct ------------------------ //
typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;


// ------------------------ Utils -------------------------- //
int		push_swap(int ac, char *av[]);
char	**ft_split(const char *s, char c);
int		ft_is_ordered(t_stack *n);

// ------------------------ Checks ------------------------ //
int		ft_check_argv_are_valid(int ac, char *av[]);	
int		ft_check_duplic(int ac, char *av[]);
int		ft_contains_digit(char *str);
int		ft_check_digits(int ac, char *av[]);
int		ft_check_range(int ac, char *av[]);

// ------------------------ List & nodes ------------------ //
t_stack	*ft_init_list(char **av);
t_stack	*ft_newnode(int num);
void	ft_stack_add_back(t_stack **stack, t_stack *newnode);
//void	ft_stack_add_front(t_stack **stack, t_stack *newnode);
t_stack	*ft_get_last_node(t_stack *stack);
void	ft_printstack(t_stack *a, t_stack *b);
int		ft_lst_size(t_stack *stack);

// ------------------------ Pivots ------------------------ //
void	ft_pivot(t_stack *a, t_stack *b, int ac);
void	ft_order_3(t_stack *a, t_stack *b);
void	ft_order_3_5(t_stack *a, t_stack *b);
void	ft_order_more_5(t_stack *a, t_stack *b);

// ------------------------ Movements --------------------- //
void	ft_sa(t_stack *a, t_stack *b);
void	ft_sb(t_stack *a, t_stack *b);
void	ft_ss(t_stack *a, t_stack *b);
void	ft_swap(t_stack *ab);

void	ft_pb(t_stack *a, t_stack *b);
void	ft_pa(t_stack *a, t_stack *b);

void	ft_ra(t_stack *a);
void	ft_rb(t_stack *b);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rotate(t_stack *ab);

void	ft_rra(t_stack *a);
void	ft_rrb(t_stack *b);
void	ft_rrr(t_stack *a, t_stack *b);
void	ft_rev_rotate(t_stack *ab);

#endif