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

/*pa : push a - pone el primer elemento del stack b encima del stack a.*/
void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (ft_lst_size(*b) > 0)
	{
		temp = *b;
		*b = (*b)->next;
		temp->next = *a;
		*a = temp;
		write (1, "pa\n", 3);
	}
}

/*pb : push b - pone el primer elemento del stack a encima del stack b.*/
void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (ft_lst_size(*a) > 0)
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = *b;
		*b = temp;
		write (1, "pb\n", 3);
	}
}
