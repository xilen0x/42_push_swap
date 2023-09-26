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
	int max;
	int	min;

	max = ft_find_max(a);
	min = ft_find_min(a);
	if (a->num > a->next->num && !max) // caso 2 1 3
		ft_sa(a, b);
	else if ((a->next->num == max) && (a->num == min)) //caso 1 3 2
	{
		ft_sa(a, b);//3 1 2
		ft_ra(a);
		ft_printstack(a, b);
	}
	else if (a->num == max && a->next->num == min) // caso 3 1 2
		ft_ra(a);
	else if (a->num == max && a->next->next->num == min) // caso 3 2 1
	{
		ft_sa(a, b);//2 3 1
		ft_rra(&a);
	}
	else //caso 2 3 1
		ft_rra(&a);
	ft_printstack(a, b);
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
