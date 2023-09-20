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

int	ft_is_ordered(t_stack *a)
{
	// Si la lista está vacía o tiene un solo elemento, ya está ordenada.
	if (a == NULL || a->next == NULL)
		return (1);
	// Comprobacion si la lista está ordenada ascendentemente.
	while (a->next != NULL)
	{
		// Si se encuentra un elemento mayor que el siguiente, la lista no está ordenada.
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
}


void	ft_swap_ab(t_stack *a, t_stack *b)
{
	int	temp;

	printf("ANTES DE swap_ab:\n");
	ft_printstack(a, b);
	if (ft_is_ordered(a))
	{
		printf("Lista ya ordenada!\n");
		return ;
	}
	else
	{
		temp = a->num;
		a->num = a->next->num;
		a->next->num = temp;
		printf("DESPUES DE swap_ab:\n");
		ft_printstack(a, b);
	}

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
