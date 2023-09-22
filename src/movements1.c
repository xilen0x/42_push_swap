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

/*pb : push b - toma el primer elemento del stack a y lo pone encima del 
stack b. No hace nada si a está vacío.*/
#include "../include/push_swap.h"
/* -------------------------------- SWAP --------------------------------*/
void	ft_swap(t_stack *ab)
{
	int	temp;

	temp = ab->num;
	ab->num = ab->next->num;
	ab->next->num = temp;
}

void	ft_sa(t_stack *a, t_stack *b)
{

	printf("********* ANTES DE ft_sa ********* \n");
	ft_printstack(a, b);
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
		printf("********* DESPUES DE ft_sa *********\n");
		ft_printstack(a, b);
	}
}

void	ft_sb(t_stack *a, t_stack *b)
{

	printf("********* ANTES DE ft_sb ********* \n");
	ft_printstack(a, b);
	if (ft_is_ordered(b))
	{
		printf("\nLista ya ordenada**!\n");
		return ;
	}
	else
	{
		if (ft_lst_size(b) > 1)
		{
			ft_swap(b);
			printf("sb\n");
		}
		printf("********* DESPUES DE ft_sb *********\n");
		ft_printstack(a, b);
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
