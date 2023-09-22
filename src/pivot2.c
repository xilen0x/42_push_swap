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

void	ft_order_3(t_stack *a, t_stack *b)
{
	int	min;

	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada!\n");
		ft_printstack(a, b);
		return ;
	}
	else
	{
		min = a->num;
		if ((a->next->num) < min)
		{
			ft_sa(a, b);
			if (ft_is_ordered(a))
			{
				printf("\nLista ya ordenada!\n");
				ft_printstack(a, b);
				return ;
			}
			else
			{
				ft_rra(&a);
				ft_printstack(a, b);
				return ;
			}
		}
		else
			ft_rra(&a);
		ft_printstack(a, b);
	}
}

void	ft_order_3_5(t_stack *a, t_stack *b)
{
	printf("********* ANTES DE *********\n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada!\n");
		return ;
	}
	else
	{
		//ft_rotate(a);
		//ft_rra(&a);
		
		printf("********* DESPUES DE *********\n");
		ft_printstack(a, b);
	}
}

void	ft_order_more_5(t_stack *a, t_stack *b)
{
	printf("ANTES DE ft_order_more_5:\n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada!\n");
		return ;
	}
	else
	{
		printf("\nDo something!\n");
	}
}
