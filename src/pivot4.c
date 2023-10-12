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
	int	aux;

	i = 0;
	aux = 0;
	num_max = INT_MIN;
	while (stack)
	{
		if (nb > stack->num && stack->num > num_max)
		{
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
	int		i;
	//int		min;
	int		indice;
	t_stack	*head;

	ft_pb(a, b);
	ft_pb(a, b);
	ft_printstack(*a, *b, "\n");
	//min = ft_find_min(*a);
	head = *a;
	while (head->next)
	{
		indice = ft_find_magic_num(*b, head->num);
		i = 0;
		while (i <= indice)
		{
			ft_rb(b);
			i++;
		}
		ft_printstack(*a, *b, "\n");
		ft_pb(a, b);
		head = head->next;
	}
	ft_printstack(*a, *b, "\n");
}
