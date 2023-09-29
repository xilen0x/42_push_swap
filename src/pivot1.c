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
		ft_printstack(a, "AC2\n");
	}
	else if (ac == 3)
	{
		ft_order_3(&a);
		ft_printstack(a, "AC3\n");
	}
	else if (ac == 4)
	{
		ft_order_4(a, b);
		ft_printstack(a, "AC4\n");
	}
	else
	{
		ft_order_more_5(a, b);
		ft_printstack(a, "AC5\n");
	}
}
