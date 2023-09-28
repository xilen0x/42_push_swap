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

void	ft_order_3(t_stack *a)
{
	int	max;
	int	min;

	max = ft_find_max(a);
	min = ft_find_min(a);
	if ((a->num > a->next->num) && (a->next->next->num > a->num)) // caso 2 1 3
		ft_sa(a);
	else if ((a->next->num > a->num) && (a->num < a->next->next->num)) //caso 1 3 2
	{
		ft_sa(a);//3 1 2
		ft_printstack(a);
		ft_ra(&a);
		ft_printstack(a);
	}
	else if (a->num == max && a->next->num == min) // caso 3 1 2
		ft_ra(&a);
	else if (a->num == max && a->next->next->num == min) // caso 3 2 1
	{
		ft_sa(a);//2 3 1
		ft_rra(&a);
	}
	else //caso 2 3 1
		ft_rra(&a);
	//ft_printstack(a);
}

void	ft_order_3_5(t_stack *a, t_stack *b)
{
	b = 0;//momentaneamente
	printf("********* ANTES DE *********\n");
	ft_printstack(a);
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
		ft_printstack(a);
	}
}

void	ft_order_more_5(t_stack *a, t_stack *b)
{
	b = 0;//momentaneamente
	printf("ANTES DE ft_order_more_5:\n");
	ft_printstack(a);
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
