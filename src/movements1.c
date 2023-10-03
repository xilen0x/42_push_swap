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

#include "../include/push_swap.h"

/* -------------------------------- SWAP --------------------------------*/
void	ft_swap(t_stack *ab)
{
	int	temp;

	temp = ab->num;
	ab->num = ab->next->num;
	ab->next->num = temp;
}

/*sa : swap a - intercambia los dos primeros elementos encima del stack a.*/
void	ft_sa(t_stack *a)
{
	if (ft_lst_size(a) > 1)
	{
		ft_swap(a);
		write (1, "sa\n", 3);
	}
}

/*sb : swap b - intercambia los dos primeros elementos encima del stack b.*/
void	ft_sb(t_stack *a, t_stack *b)
{
	(void)a;
	if (ft_lst_size(b) > 1)
	{
		ft_swap(b);
		write (1, "sb\n", 3);
	}
}

void	ft_ss(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		if (ft_lst_size(a) > 1)
		{
			ft_swap(a);
		}
		if (ft_lst_size(b) > 1)
		{
			ft_swap(b);
		}
		write (1, "ss\n", 3);
	}
}
