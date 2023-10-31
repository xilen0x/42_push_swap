/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:07:56 by castorga          #+#    #+#             */
/*   Updated: 2023/09/15 16:08:00 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*funcion que ordena 3 valores*/
void	ft_order_3(t_stack **a)
{
	while (!ft_is_ordered(*a))
	{
		if ((*a)->num == ft_find_min(*a))
		{
			ft_rra(a);
			ft_sa(a);
		}
		else if ((*a)->num == ft_find_max(*a))
		{
			ft_ra(a);
			if (!ft_is_ordered(*a))
				ft_sa(a);
		}
		else if ((*a)->next->num == ft_find_min(*a))
			ft_sa(a);
		else
			ft_rra(a);
	}
}

/*funcion utilitaria utilizada en ft_order_4 */
void	ft_pb_order3_pa(t_stack **a, t_stack **b)
{
	ft_pb(a, b);
	ft_order_3(a);
	ft_pa(a, b);
}

/*funcion que ordena 4 valores*/
void	ft_order_4(t_stack **a, t_stack **b)
{
	int	min;

	if (ft_is_ordered(*a))
		return ;
	min = ft_find_min(*a);
	if ((*a)->num == min)//caso 1er valor sea el min
		ft_pb_order3_pa(a, b);
	else if ((*a)->next->num == min)//caso 2do valor sea el min
	{
		ft_sa(a);
		ft_pb_order3_pa(a, b);
	}
	else if ((*a)->next->next->num == min)//caso 3er valor sea el min
	{
		ft_rra(a);
		ft_rra(a);
		ft_pb_order3_pa(a, b);
	}
	else//caso 4to valor sea el min
	{
		ft_rra(a);
		ft_pb_order3_pa(a, b);
	}
}
