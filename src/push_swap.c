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

/*Funcion que verifica si la lista esta ordenada*/
int	ft_is_ordered(t_stack *n)
{
	// Si la lista está vacía o tiene un solo elemento: no hay nada que ordenar.
	if (n == NULL || n->next == NULL)
		return (1);
	while (n->next != NULL)
	{
		// Si se encuentra un elemento mayor que el siguiente, la lista no está ordenada.
		if (n->num > n->next->num)
			return (0);
		n = n->next;
	}
	return (1);
}

/*Funcion que verifica si la lista esta inversamente ordenada*/
/*int	ft_is_inv_ordered(t_stack *n)
{
	if (n == NULL || n->next == NULL)
		return (1);
	while (n->next != NULL)
	{
		// Si se encuentra un elemento menor que el siguiente, la lista no está ordenada.
		if (n->num < n->next->num)
			return (0);
		n = n->next;
	}
	return (1);
}*/

/*Funcion que llama a ft_split y check si nums son validos. Luego envia todo a push_swap*/
int	ft_prev_split(int ac, char *av[])
{
	char	**split_result;
	int		i;

	split_result = ft_split(av[1], ' ');
	i = 0;
	while (split_result[i])
		i++;
	if (i > 1)
	{
		if (ft_check_argv_are_valid(ac, split_result))
			return (1);
		push_swap(i, split_result);
	}
	free(split_result);
	return (0);
}

/*Funcion que llama a ft_init_list para inicializar lista A
y luego envia todo a ft_pivot */
int	push_swap(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = ft_init_list(av);
	stack_b = NULL;
	if (ft_is_ordered(stack_a))
	{
		//write(1, "\n¡Lista ya ordenada!\n", 22);
		return (0);
	}
	else
		ft_pivot(&stack_a, &stack_b, ac);
	return (0);
}
