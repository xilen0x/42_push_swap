/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:24:10 by castorga          #+#    #+#             */
/*   Updated: 2023/10/05 10:24:13 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ------- ORDENAMIENTO PARA VALORES MAYORES A 5 NUMs ---------------*/

int	ft_find_magic_num(t_stack *stack, int nb)
{
	int	i;
	int	num_max;
	int aux;

	i = 0;
	aux = 0;
	num_max = INT_MIN;
	while (stack)
	{
		if (nb > stack->num && stack->num > num_max)
		{
			printf("llega aqui\n");
			num_max = stack->num;
			aux = i;
		}
		stack = stack->next;
		i++;
	}
	return (aux);
}

void	ft_order_more_5(t_stack **a, t_stack **b)
{
	int	i;
	int	nb;
	int	indice;
	//int	max;
	//min = ft_find_min(*a);
	//max = ft_find_max(*a);
	ft_pb(a, b);
	ft_pb(a, b);
	while ((*a)->next != NULL)
	{
		nb = (*a)->num;
		indice = ft_find_magic_num(*b, nb);
		//printf("INDICE: %d\n", indice);
		//ft_pb(a, b);
		i = 0;
		while (i <= indice)
		{
			printf("llega aqui2\n");
			ft_rb(b);
			i++;
		}
		(*a) = (*a)->next;
	}
	//nb = (*a)->num;
	//indice = ft_find_magic_num(*b, nb);
	//printf("INDICE: %d\n", indice);
	ft_pb(a, b);

	ft_printstack(*a, "FIN_A\n");
	ft_printstack(*b, "FIN_B\n");
}
