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
/*# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <errno.h>*/

/*typedef struct lst_stack
{
	t_list	*stack_a;
	t_list	*stack_b;
}	t_stack;
*/

//t_dlist	*init_stack_a(int argc, char *argv[]);

int		ft_check_argv_are_valid(char *av[]);
int		ft_check_ac_is_valid(int ac, char *av[]);
/*int		ft_isdigit(int num);
int		ft_atoi(const char *str);
char	**ft_split(const char *s, char c);*/
int		ft_check_duplic(char *argv[]);

#endif