/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:34:47 by castorga          #+#    #+#             */
/*   Updated: 2023/09/22 11:34:51 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* -------------------------------- ROTATE --------------------------------*/

/*Funcion que rota los nodos, utilizada en ft_ra, ft_rb y ft_rr*/
void	ft_rotate(t_stack **ab)
{
	t_stack	*temp;
	t_stack	*lastnode;

	lastnode = *ab;
	temp = (*ab)->next;

	while ((*ab)->next != NULL)
		*ab = (*ab)->next;
	lastnode->next = NULL;
	(*ab)->next = lastnode;
	(*ab) = temp;
}

/*ra : rotate a - el primer elemento se convierte en el último.*/
void	ft_ra(t_stack **a)
{
	if (ft_lst_size(*a) > 0)
	{
		ft_rotate(a);
		write (1, "ra\n", 3);
	}
}

/*rb : rotate b - el primer elemento se convierte en el último.*/
void	ft_rb(t_stack **b)
{
	if (ft_lst_size(*b) > 0)
	{
		ft_rotate(b);
		write (1, "rb\n", 3);
	}
}

/*rr : rotate a y rotate b a la vez.*/
void	ft_rr(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{
		if (ft_lst_size(*a) > 1)
		{
			ft_rotate(a);
		}
		if (ft_lst_size(*b) > 1)
		{
			ft_rotate(b);
		}
		write (1, "rr\n", 3);
	}
}
