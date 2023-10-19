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

t_moves	ft_num_of_moves(t_stack **a, t_stack **b, t_moves moves)
{
	t_moves	temp;
	int i = 0;

	while (*a)
	{
		temp.ra = i;
		temp.rb = ft_find_magic_num(*b, (*a)->num);
		temp.total = temp.ra + temp.rb;
		if (temp.total < moves.total)
			moves = temp;
		(*a) = (*a)->next;
		i++;
	}
	return (moves);
}

void	ft_exe_moves(t_stack **a, t_stack **b, t_moves moves)
{
	while (moves.ra > 0)
	{
		ft_ra(a);
		moves.ra--;
	}
	while (moves.rb > 0)
	{
		ft_rb(b);
		moves.rb--;
	}
}

void	ft_order_more_5(t_stack **a, t_stack **b)
{
	t_moves	moves;
	t_moves	q_moves;

	ft_pb(a, b);
	ft_pb(a, b);

	while ((*a))
	{
		moves.ra = 0;
		moves.rb = 0;
		moves.total = INT_MAX;
		// calculate quantity of movements
		q_moves = ft_num_of_moves(a, b, moves);
		ft_exe_moves(a, b, q_moves);
		ft_pb(a, b);
		write (1, "test", 4);
	}
	ft_printstack(*a, *b, "\n");
}
