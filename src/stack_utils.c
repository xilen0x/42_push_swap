
#include "../include/push_swap.h"

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

/*void	ft_stack_add_front(t_stack **stack, t_stack *newnode)
{
	if (stack != 0)
	{
		newnode->next = *stack;
		*stack = newnode;
	}
}*/

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

void	ft_printstack(t_stack *a, t_stack *b)
{
	printf("\n------STACK A------\n");
	while (a != NULL)
	{
		printf("%i\n", a->num);
		a = a->next;
	}
	printf("\n------STACK B------\n");
	while (b != NULL)
	{
		printf("%i\n", b->num);
		b = b->next;
	}
}
