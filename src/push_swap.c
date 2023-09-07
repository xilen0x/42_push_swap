/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:32:41 by castorga          #+#    #+#             */
/*   Updated: 2023/08/22 12:38:38 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Funciones permitidas:
◦ write
◦ read
◦ malloc
◦ free
◦ exit

El juego se compone de dos stacks, llamados a y b.
• Para empezar:
	◦ En a tendrás números positivos y/o negativos, nunca duplicados.
	◦ En b no habrá nada.
• El objetivo es ordenar los números del stack a en orden ascendente.
• Para hacerlo tienes las siguientes operaciones a tu disposición:

sa : swap a - intercambia los dos primeros elementos encima del stack a. No 
hace nada si hay uno o menos elementos.
sb : swap b - intercambia los dos primeros elementos encima del stack b. No 
hace nada si hay uno o menos elementos.
ss : swap a y swap b a la vez.

pa : push a - toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.

pb : push b - toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.

ra : rotate a - desplaza hacia arriba todos los elementos del stack a una 
posición, de forma que el primer elemento se convierte en el último.

rb : rotate b - desplaza hacia arriba todos los elementos del stack b una 
posición, de forma que el primer elemento se convierte en el último.

rr : rotate a y rotate b - desplaza al mismo tiempo todos los elementos del 
stack a y del stack b una posición hacia arriba, de forma que el primer 
elemento se convierte en el último.

rra : reverse rotate a - desplaza hacia abajo todos los elementos del stack a 
una posición, de forma que el último elemento se convierte en el primero.

rrb : reverse rotate b - desplaza hacia abajo todos los elementos del stack b 
una posición, de forma que el último elemento se convierte en el primero.

rrr : reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
los elementos del stack a y del stack b una posición hacia abajo, de forma que
el último elemento se convierte en el primero.

Debes escribir un programa llamado push_swap que recibirá como argumento el
stack a con el formato de una lista de enteros. El primer argumento debe ser 
el que esté encima del stack (cuidado con el orden).
• El programa debe mostrar la lista de instrucciones (más corta posible) para 
ordenar el stack a, de menor a mayor donde el menor se sitúe en la cima del 
stack.
• Las instrucciones deben separarse utilizando un “\n” y nada más.
• El objetivo es ordenar el stack con el mínimo número de operaciones posible. 
Durante la evaluación compararemos el número de instrucciones obtenido por tu 
programa con un rango de instrucciones máximo.
• Tu programa no recibirá puntos tanto si tu programa muestra una lista 
demasiado larga como si el resultado no es correcto.
• Si no se especifican parámetros, el programa no deberá mostrar nada y deberá
devolver el control al usuario.
• En caso de error, deberás mostrar Error seguido de un “\n” en la salida de 
errores estándar. Algunos de los posibles errores son: argumentos que no son 
enteros, argumentos superiores a un int, y/o encontrar números duplicados.

https://www.figma.com/file/kJE3C5sebDLtd5imytkOUa/Untitled?type=design&node-id=0%3A1&mode=design&t=nONFp0J2mEaVbnq3-1

*/

#include "../include/push_swap.h"

int	push_swap(char *av[])
{
	//inicializar lista, guardar cada elemento(numero) en un nodo
	//t_list	*new_list;
	//t_list	*new_node;
	//void	*content;

	//new_list = NULL;
	//stack_b == NULL; recom.

	//if stack == 2
		//ya esta ordenado? dejar igual,
		//else --> swap

	//if stack == 3
		//ya esta ordenado? --> already_order()
		//else ...ordenar

	//if stack == 5
		//ya esta ordenado? --> already_order()
		//else ...ordenar

	//else
		//ya esta ordenado? --> already_order()
		//else ...ordenar

	return (0);
}

int	main(int ac, char **av)
{
	char	**split_result;

	if (ac > 1)
	{
		if (ac == 2)
		{
			split_result = ft_if_ac_is_2(ac, av);
			printf("split por aqui");
			int i = 0;
			while (split_result[i])
			{
				printf("\n%c", *split_result[i]);
				i++;
			}
			//push_swap();
		}
		else if (ft_check_argv_are_valid(ac, av) == 1)
			return (1);
		else
		{
			printf("todo ok hasta aqui!...creo :)");
			//push_swap();
		}
	}
	return (0);
}