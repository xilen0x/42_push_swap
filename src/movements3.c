/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:40:43 by castorga          #+#    #+#             */
/*   Updated: 2023/09/22 12:40:46 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* -------------------------------- PUSH --------------------------------*/
/*pa : push a - toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.*/
void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (b != NULL)
	{
		temp = *b;
		*b = (*b)->next;
		temp->next = *a;
		*a = temp;
		printf("pa\n");
	}
}

/*pb : push b - Toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.*/
void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (a != NULL)
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = *b;
		*b = temp;
		printf("pb\n");
	}
}

