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

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

int		push_swap(int ac, char *av[]);
int		ft_check_argv_are_valid(int ac, char *av[]);	
int		ft_check_duplic(int ac, char *av[]);
int		ft_contains_digit(char *str);
int		ft_check_digits(int ac, char *av[]);
int		ft_check_range(int ac, char *av[]);

t_stack	*ft_init_list(char **av);
t_stack	*ft_newnode(int num);
void	ft_stackaddback(t_stack **stack, t_stack *newnode);
t_stack	*ft_get_last_node(t_stack *stack);
void	ft_printstack(t_stack *a, t_stack *b);
void	ft_pivot(t_stack *a, t_stack *b, int ac);
void	ft_swap_ab(t_stack *a, t_stack *b);
void	ft_order_2_3(t_stack *a, t_stack *b);
void	ft_order_3_5(t_stack *a, t_stack *b);
void	ft_order_more_5(t_stack *a, t_stack *b);

#endif