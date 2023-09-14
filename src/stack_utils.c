
#include "../include/push_swap.h"

t_stack	*ft_init_list(char **av)
{
	int		i;
	t_stack	*stack;
	t_stack	*newnode;

	newnode = NULL;
	stack = NULL;
	i = 0;
	while (av[i])
	{
		newnode = ft_newnode(atoi(av[i]));
		stack = ft_stackaddback(stack, newnode);
		i++;
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

t_stack	*ft_stackaddback(t_stack *stack, t_stack *newnode)
{
	t_stack	*lastnode;

	if (stack != 0)
	{
		lastnode = ft_stacklast(stack);
		if (!lastnode)
			stack = newnode;
		else
			lastnode->next = newnode;
	}
	return (stack);
}

t_stack	*ft_stacklast(t_stack *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

void	ft_printstack(t_stack *a, t_stack *b)
{
	printf("------STACK A------\n");
	while (a)
	{
		printf("%i\n",a->num);
		a = a->next;
	}
	printf("\n------STACK B------\n");
	while (b)
	{
		printf("%i\n",b->num);
		b = b->next;
	}
}
