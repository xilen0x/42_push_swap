/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:18:03 by castorga          #+#    #+#             */
/*   Updated: 2023/09/20 16:18:05 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*pb : push b - toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.*/
#include "../include/push_swap.h"

void	ft_push_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (*a != NULL)
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = *b;
		*b = temp;
	}
}
