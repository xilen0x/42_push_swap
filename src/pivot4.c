/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:24:10 by castorga          #+#    #+#             */
/*   Updated: 2023/10/05 10:24:13 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ------- ORDENAMIENTO PARA VALORES MAYORES A 5 NUMs ---------------*/

int	ft_find_magic_num(t_stack *stack, int nb)
{
	int	i;
	int	num_max;
	int	aux;

	i = 0;
	aux = 0;
	num_max = INT_MIN;
	while (stack)
	{
		if (nb > stack->num && stack->num > num_max)
		{
			num_max = stack->num;
			aux = i;
		}
		stack = stack->next;
		i++;
	}
	return (aux);
}

int	ft_num_of_moves(t_stack **a, t_stack **b, t_moves moves)
{
	t_moves	temp;

	while ((*a)->next)
	{
		temp.ra = ft_find_magic_num(*a, (*a)->num);
		temp.rb = ft_find_magic_num(*b, (*a)->num);
		temp.total = temp.ra + temp.rb;
		if (temp.total < moves.total)
			moves.total = temp.total;
		(*a) = (*a)->next;
	}
	return (moves.total);
}

void	ft_exe_moves(t_stack **a, t_stack **b, t_moves moves)
{
	int	i;

	i = 0;
	while (i <= moves.ra)
	{
		ft_ra(a);
		i++;
	}
	i = 0;
	while (i <= moves.rb)
	{
		ft_rb(b);
		i++;
	}
}

void	ft_order_more_5(t_stack **a, t_stack **b)
{
	t_moves	moves;
	int	q_moves;
	//i = 0;
	ft_pb(a, b);
	ft_pb(a, b);


	//cuantos ra/rb me costaria poner stack en posicion correcta?
	moves.ra = ft_find_magic_num(*a, (*a)->num);
	moves.rb = ft_find_magic_num(*b, (*a)->num);
	moves.total = moves.ra + moves.rb;

	// calculate quantity of movements
	q_moves = ft_num_of_moves(a, b, moves);
	// el total menor(entre moves y temp) es el que envio a ft_exe_moves()
	//para execute movements
	ft_exe_moves(a, b, moves);

	ft_printstack(*a, *b, "\n");
}
