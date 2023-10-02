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

int	ft_find_second_min(t_stack *head, int first_min)
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
}

void	ft_printstack(t_stack *stack, char *str)
{
	printf("\n------ STACK ------\n");
	printf("%s\n", str);
	while (stack != NULL)
	{
		printf("%i\n", stack->num);
		stack = stack->next;
	}
}
