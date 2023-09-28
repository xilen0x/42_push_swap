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

/*
sa : swap a - intercambia los dos primeros elementos encima del stack a.*/

void	ft_sa(t_stack *a)
{
	if (ft_is_ordered(a))
	{
		printf("\nLista ya ordenada**!\n");
		return ;
	}
	else
	{
		if (ft_lst_size(a) > 1)
		{
			ft_swap(a);
			printf("sa\n");
		}
	}
}

/*sb : swap b - intercambia los dos primeros elementos encima del stack b.*/
void	ft_sb(t_stack *a, t_stack *b)
{
	if (ft_is_ordered(b))
	{
		printf("\nLista ya ordenada**!\n");
		ft_printstack(a);
		return ;
	}
	else
	{
		if (ft_lst_size(b) > 1)
		{
			ft_swap(b);
			printf("sb\n");
		}
		ft_printstack(a);
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
		printf("ss\n");
	}
}
