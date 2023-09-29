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

void	ft_order_3(t_stack **a)
{
	int	max;
	int	min;

	max = ft_find_max(*a);
	min = ft_find_min(*a);
	if (((*a)->num > (*a)->next->num) && ((*a)->next->next->num > (*a)->num)) // caso 2 1 3
	{
		ft_sa(*a);
		ft_printstack(*a, "");
	}
	else if (((*a)->next->num > (*a)->num) && ((*a)->num < (*a)->next->next->num)) //caso 1 3 2
	{
		ft_sa(*a);//3 1 2
		ft_ra(a);
		ft_printstack(*a, "");
	}
	else if ((*a)->num == max && (*a)->next->num == min) // caso 3 1 2
	{
		ft_ra(a);
		ft_printstack(*a, "");
	}
	else if ((*a)->num == max && (*a)->next->next->num == min) // caso 3 2 1
	{
		ft_sa(*a);//2 3 1
		ft_rra(a);
		ft_printstack(*a, "");
	} 
	else //caso 2 3 1
	{
		ft_rra(a);
		ft_printstack(*a, "");
	}
}

void	ft_order_4(t_stack *a, t_stack *b)
{
	int	min;
	//(void)b;

	ft_printstack(a, "");
	min = ft_find_min(a);
	if (ft_lst_size(a) == 4)
	{
		ft_pb(&a, &b);
		ft_is_ordered(a);
		ft_order_3(&a);
		ft_is_ordered(a);
		ft_pa(&a, &b);
		if (a->num > a->next->num)
		{
			ft_ra(&a);
			ft_printstack(a, "");
		}
		ft_printstack(a, "");
	}
}

		/*else if (ft_lst_size(a) == 5)
		{
			//ft_rotate(a);
			//ft_rra(&a);
		}
		ft_printstack(a);*/

void	ft_order_more_5(t_stack *a, t_stack *b)
{
	(void)b;
	ft_printstack(a, "");
	{
		printf("\nDo something!\n");
	}
}
