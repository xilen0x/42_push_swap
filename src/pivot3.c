/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:08:34 by castorga          #+#    #+#             */
/*   Updated: 2023/10/03 10:08:36 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_order_min_in_4_5(t_stack **a, t_stack **b)
{
	ft_rra(a);
	if (ft_is_ordered(*a))
		return ;
	else
		ft_rra(a);
	if (ft_is_ordered(*a))
		return ;
	else
		ft_order_5(a, b);
}

void	ft_order_5(t_stack **a, t_stack **b)
{
	int	min;

	min = ft_find_min(*a);
	if ((*a)->num == min)//caso 1er valor sea el min
		ft_pb_order4_pa(a, b);
	else if ((*a)->next->num == min)//caso 2do valor sea el min
	{
		ft_sa(*a);
		ft_pb_order4_pa(a, b);
	}
	else if ((*a)->next->next->num == min)//caso 3er valor sea el min
	{
		ft_ra(a);
		ft_sa(*a);
		ft_pb_order4_pa(a, b);
	}
	else//caso 4to o 5to valor es el min
	{
		ft_order_min_in_4_5(a, b);
	}
}
