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
void	ft_order_more_5(t_stack **a, t_stack **b)
{
	ft_pb(a, b);
	ft_pb(a, b);
	while (a != NULL)
	{
		if ((*a)->num > (*b)->num)
		{
			ft_pb(a, b);
			ft_printstack(*a, "A1\n");
			ft_printstack(*b, "B1\n");
		}
		else if (((*a)->num < (*b)->num) && ((*a)->num > (*b)->next->num))
		{
			ft_pb(a, b);
			ft_sb(a, b);
			ft_printstack(*a, "A2\n");
			ft_printstack(*b, "B2\n");
		}
		else
		{
			ft_pb(a, b);
			ft_ra(a);
			ft_printstack(*a, "A3\n");
			ft_printstack(*b, "B3\n");
		}
		(*a) = (*a)->next;
	}
	ft_printstack(*a, "FIN_A\n");
	ft_printstack(*b, "FIN_B\n");
}
