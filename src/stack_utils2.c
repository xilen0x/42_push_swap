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

int	ft_check_argv_are_valid2(char *av[])
{
	int		i;
	char	*str;

	i = 0;
	while (av[1][i])
	{
		str = ft_isspace((char *)av);
		if (!(str[1] >= '0' && str[1] <= '9'))
		{
			write (2, "Error\n", 6);
			return (1);
		}
		else if (!ft_isdigit(av[1][i]) && av[1][i] != ' ')
		{
			write (2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_lst_clear(t_stack **lst)
{
	t_stack	*current;
	t_stack	*next;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
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
