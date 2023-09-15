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

void	ft_swap_ab(t_stack *a, t_stack *b)
{
	int	temp;

	printf("ANTES DE swap_ab:\n");
	ft_printstack(a, b);
	temp = a->num;
	a->num = a->next->num;
	a->next->num = temp;
	printf("DESPUES DE swap_ab:\n");
	ft_printstack(a, b);

}

void	ft_order_2_3(t_stack *a, t_stack *b)
{
	printf("ft_order_2_3\n");
	ft_printstack(a, b);

}

void	ft_order_3_5(t_stack *a, t_stack *b)
{
	printf("ft_order_3_5\n");
	ft_printstack(a, b);

}

void	ft_order_more_5(t_stack *a, t_stack *b)
{
	printf("ft_order_more_5\n");
	ft_printstack(a, b);

}
