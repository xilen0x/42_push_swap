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

/*funcion de paso que deriva segun cantidad de argumentos*/
void	ft_pivot(t_stack *a, t_stack *b, int ac)
{
	if (ac == 2)
	{
		ft_sa(a);
		ft_printstack(a, b, "\n");
	}
	else if (ac == 3)
	{
		ft_order_3(&a);
		ft_printstack(a, b, "\n");
	}
	else if (ac == 4)
	{
		ft_order_4(&a, &b);
		ft_printstack(a, b, "\n");
	}
	else if (ac == 5)
	{
		ft_order_5(&a, &b);
		ft_printstack(a, b, "\n");
	}
	else
	{
		ft_order_more_5(&a, &b);
	}
}
