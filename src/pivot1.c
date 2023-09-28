/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:22:59 by castorga          #+#    #+#             */
/*   Updated: 2023/09/04 16:23:01 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pivot(t_stack *a, t_stack *b, int ac)
{
	if (ac == 2)
	{
		ft_sa(a);
	}
	else if (ac == 3)
	{
		if (ft_is_ordered(a))
		{
			printf("\nLista ya ordenada!\n");
			return ;
		}
		else
		{
			ft_order_3(a);
			printf("********* DESPUES DE *********\n");
			//ft_printstack(a);
		}
	}
	else if (ac < 6)
	{
		ft_order_3_5(a, b);
	}
	else
	{
		ft_order_more_5(a, b);
	}
}
