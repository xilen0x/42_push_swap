/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:22:33 by castorga          #+#    #+#             */
/*   Updated: 2023/09/26 17:22:40 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/*------------------------------ LISTA Y NODOS ------------------------------*/

/*funcion que obtiene el ultimo nodo de una lista*/
t_stack	*ft_get_last_node(t_stack *stack)
{
	if (stack)
	{
		while (stack->next)
		{
			stack = stack->next;
		}
	}
	return (stack);
}

/*funcion que crea un nuevo nodo*/
t_stack	*ft_newnode(int num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	return (node);
}

/*funcion que obtiene el tamaño de una lista*/
int	ft_lst_size(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack != NULL)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

/*funcion que enlaza nodo al final de la lista*/
void	ft_stack_add_back(t_stack **stack, t_stack *newnode)
{
	t_stack	*lastnode;

	lastnode = NULL;
	if (stack)
	{
		lastnode = ft_get_last_node(*stack);
		if (!lastnode)// Si lastnode es NULL, la lista esta vacía.
			*stack = newnode;// Asigna el nuevo nodo como el primer nodo de la lista.
		else
			lastnode->next = newnode;// Enlaza el último nodo(actual) con el nuevo nodo.
	}
}

/*funcion que inicialista la lista creando el nodo(newnode) y agregandolo a la lista(ft_stack_add_back)*/
t_stack	*ft_init_list(char **av)
{
	int		i;
	t_stack	*stack;
	t_stack	*newnode;

	stack = NULL;
	newnode = NULL;
	i = 0;
	while (av[i])
	{
		newnode = ft_newnode(ft_atoi(av[i]));
		ft_stack_add_back(&stack, newnode);
		i++;
	}
	return (stack);
}
