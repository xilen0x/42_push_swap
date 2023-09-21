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

/*pa : push a - toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.*/
void	ft_push_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (*b != NULL)
	{
		temp = *b;
		*b = (*b)->next;
		temp->next = *a;
		*a = temp;
	}
}

/*ra : rotate a - desplaza hacia arriba todos los elementos del stack 'a' una posición,
de forma que el primer elemento se convierte en el último.*/

void	ft_rotate(t_stack **ab)
{
	t_stack	*temp;
	t_stack	*lastnode;

	temp = (*ab)->next;
	lastnode = ft_get_last_node(*ab);
	lastnode->next = (*ab);
	(*ab)->next = NULL;
	(*ab) = temp;
}

void	ft_ra(t_stack **a)
{
	if (ft_lst_size(*a) > 1)
	{
		ft_rotate(a);
		printf("ra\n");
	}
}

/*rb : rotate b - desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.*/

void	ft_rb(t_stack **b)
{
	if (ft_lst_size(*b) > 1)
	{
		ft_rotate(b);
		printf("rb\n");
	}
}

void	ft_rr(t_stack **a, t_stack **b)
{
	if (*a && *b)
	{//aqui falta poner los mismos if de arriba 62, 74
		ft_rotate(a);
		ft_rotate(b);
		printf("rr\n");
	}
}
