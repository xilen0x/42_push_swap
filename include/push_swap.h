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

int	ft_check_argv_are_valid(int ac, char *av[]);	
int	ft_check_duplic(int ac, char *av[]);
int	ft_check_digits(int ac, char *av[]);
int	ft_check_range(int ac, char *av[]);

#endif