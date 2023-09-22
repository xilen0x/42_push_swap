/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:38:14 by castorga          #+#    #+#             */
/*   Updated: 2023/09/22 13:38:16 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/*rra : reverse rotate a  o  rrb : reverse rotate b
Desplaza hacia abajo todos los elementos del stack a(b)
una posición, de forma que el último elemento se convierte en el primero.*/

void	ft_rev_rotate(t_stack *ab)
{
	t_stack	*temp_h;
	t_stack	*temp_2n;
	t_stack	*lastnode;
	t_stack	*new_lastnode;

	temp_h = ab;
	temp_2n = ab->next;
	lastnode = ft_get_last_node(ab);
	lastnode->next = temp_h;
	new_lastnode = ft_get_last_node(ab);
	new_lastnode->next = NULL;
	ab = temp_h;
}


void	ft_rra(t_stack *a)
{
	if (ft_lst_size(a) > 1)
	{
		ft_rev_rotate(a);
		printf("rra\n");
	}
}



void	ft_rrb(t_stack *b)
{
	if (ft_lst_size(b) > 1)
	{
		ft_rev_rotate(b);
		printf("rrb\n");
	}
}


void	ft_rrr(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		if (ft_lst_size(a) > 1)
		{
			ft_rev_rotate(a);
		}
		if (ft_lst_size(b) > 1)
		{
			ft_rev_rotate(b);
		}
		printf("rrr\n");
	}
}
