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

/* --------------------------- REVERSE ROTATE -------------------------------*/

/*Funcion q realiza los movimientos para rra o rrb o rrr*/
void	ft_rev_rotate(t_stack **ab)
{
	t_stack	*lastnode;
	t_stack	*second_last;

	if (*ab && (*ab)->next)//verif. si hay al menos dos elem. en la lista
	{
		lastnode = *ab;
		second_last = NULL;
		while (lastnode->next)//se recorre la lista hasta encontrar el último elemento 
		{
			second_last = lastnode;
			lastnode = lastnode->next;
		}
		second_last->next = NULL;
		lastnode->next = *ab;
		*ab = lastnode;
	}
}

/*rra : reverse rotate a - Desplaza hacia abajo todos los elementos del stack 'a' 
una posición, de forma que el último elemento se convierte en el primero.*/
void	ft_rra(t_stack **a)
{
	if (ft_lst_size(*a) > 1)
	{
		ft_rev_rotate(a);
		write (1, "rra\n", 4);
	}
}


/*rrb : reverse rotate b
Desplaza hacia abajo todos los elementos del stack b
una posición, de forma que el último elemento se convierte en el primero.*/
void	ft_rrb(t_stack **b)
{
	if (ft_lst_size(*b) > 1)
	{
		ft_rev_rotate(b);
		write (1, "rrb\n", 4);
	}
}

/*rra : reverse rotate a  o  rrb : reverse rotate b
Desplaza hacia abajo todos los elementos del stack a(b)
una posición, de forma que el último elemento se convierte en el primero.*/
void	ft_rrr(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		if (ft_lst_size(a) > 1)
		{
			ft_rev_rotate(&a);
		}
		if (ft_lst_size(b) > 1)
		{
			ft_rev_rotate(&b);
		}
		write (1, "rrr\n", 4);
	}
}
