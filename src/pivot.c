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
/*sa : swap a - intercambia los dos primeros elementos encima del stack a. No 
hace nada si hay uno o menos elementos.*/

/*sb : swap b - intercambia los dos primeros elementos encima del stack b. No 
hace nada si hay uno o menos elementos.*/

/*ss : swap a y swap b a la vez.*/

void	ft_pivot(t_stack *a, t_stack *b, int ac)
{
	if (ac == 2)
	{
		ft_swap_ab(a, b);
	}
	else if (ac <= 3)
	{
		ft_order_2_3(a, b);
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
