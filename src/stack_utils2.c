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

/*funcion que calcula el segundo numero minimo*/
/*int	ft_find_second_min(t_stack *head, int first_min)
{
	int		second_min;
	t_stack	*current;

	second_min = INT_MAX;
	current = head;

	while (current != NULL)
	{
		if (current->num < second_min && current->num != first_min)
		{
			second_min = current->num;
		}
		current = current->next;
	}
	return (second_min);
}*/

/*funcion que imprime el stack*/
void	ft_printstack(t_stack *a, t_stack *b, char *str)//comentar funcion luego
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
}

/*funcion que encuentra el indice del numero num*/
/*int	ft_find_index(t_stack *a, int num)
{
	int		i;

	i = 0;
	while (a->num != num)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}*/

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

/*int	ft_is_a_pos_correct(t_stack *a, t_stack *b)
{
	if (a->num > b->num)
		return (1);
	else if ((a->num < b->num) && (a->num > b->next->num))
		return (1);
	else
		return (0);
}*/
