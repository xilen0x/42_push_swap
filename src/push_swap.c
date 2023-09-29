/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:06:15 by castorga          #+#    #+#             */
/*   Updated: 2023/09/21 18:06:23 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_ordered(t_stack *n)
{
	// Si la lista está vacía o tiene un solo elemento: ya está ordenada.
	if (n == NULL || n->next == NULL)
		return (1);
	// Comprobacion si la lista está ordenada ascendentemente.
	while (n->next != NULL)
	{
		// Si se encuentra un elemento mayor que el siguiente, la lista no está ordenada.
		if (n->num > n->next->num)
			return (0);
		n = n->next;
	}
	return (1);
}

int	push_swap(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = ft_init_list(av);
	stack_b = NULL;
	if (ft_is_ordered(stack_a))
	{
		printf("\nLista ya ordenada**!\n");
		return (0);
	}
	else
		ft_pivot(stack_a, stack_b, ac);
	return (0);
}

