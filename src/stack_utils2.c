/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:23:34 by castorga          #+#    #+#             */
/*   Updated: 2023/09/26 17:23:36 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*funcion que calcula el numero maximo*/
int	ft_find_max(t_stack *stack)
{
	int		max;
	t_stack	*ptr;

	ptr = stack;
	max = ptr->num;
	if (ptr)
	{
		while (ptr->next)
		{
			if (ptr->next->num > max)
				max = ptr->next->num;
			ptr = ptr->next;
		}
	}
	return (max);
}

/*funcion que calcula el numero minimo*/
int	ft_find_min(t_stack *stack)
{
	int		min;
	t_stack	*ptr;

	ptr = stack;
	min = 0;
	if (ptr)
	{
		min = ptr->num;
		while (ptr->next)
		{
			if (ptr->next->num < min)
				min = ptr->next->num;
			ptr = ptr->next;
		}
	}
	return (min);
}


int	ft_find_max_pos(t_stack *stack)
{
	int		max;
	t_stack	*ptr;
	int		i;
	int		aux;

	i = 0;
	ptr = stack;
	max = ptr->num;
	aux = 0;
	if (ptr)
	{
		while (ptr)
		{
			if (ptr->num > max)
			{
				max = ptr->num;
				aux = i;
			}
			ptr = ptr->next;
			i++;
		}
	}
	return (aux);
}

int	ft_error(void)
{
	write (2, "Error\n", 6);
	return (1);
}
/*funcion que imprime el stack*/
/*void	ft_printstack(t_stack *a, t_stack *b, char *str)//comentar funcion luego
{
	printf("\n*********************************\n");
	printf("\n------ STACK A ------\n");
	printf("%s\n", str);
	while (a != NULL)
	{
		printf("%i\n", a->num);
		a = a->next;
	}

	printf("\n------ STACK B ------\n");
	printf("%s\n", str);
	while (b != NULL)
	{
		printf("%i\n", b->num);
		b = b->next;
	}
}*/
