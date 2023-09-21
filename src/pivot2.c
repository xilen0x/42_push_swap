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

void	ft_swap_sa(t_stack *a, t_stack *b)
{
	int	temp;

	printf("********* ANTES DE swap_sa ********* \n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada**!\n");
		return ;
	}
	else
	{
		temp = a->num;
		a->num = a->next->num;
		a->next->num = temp;
		printf("sa\n");// es asi?
		printf("********* DESPUES DE swap_sa *********\n");
		ft_printstack(a, b);
	}
}

void	ft_order_3(t_stack *a, t_stack *b)
{
	printf("********* ANTES DE ft_push_pb *********\n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada***!\n");
		return ;
	}
	else
	{
		ft_push_pb(&a, &b);
		printf("********* DESPUES DE ft_push_pb *********\n");
		ft_printstack(a, b);
	}
}

void	ft_order_3_5(t_stack *a, t_stack *b)
{
	printf("ANTES DE ft_order_3_5:\n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada!\n");
		return ;
	}
	else
	{
		ft_rotate(&a);
		printf("********* DESPUES DE ft_rotate_ra *********\n");
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
