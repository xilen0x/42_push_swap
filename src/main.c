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

• En caso de error, deberás mostrar Error seguido de un “\n” en la salida de 
errores estándar. Algunos de los posibles errores son: argumentos que no son 
enteros, argumentos superiores a un int, y/o encontrar números duplicados.

https://www.figma.com/file/kJE3C5sebDLtd5imytkOUa/Untitled?type=design&node-id=0%3A1&mode=design&t=nONFp0J2mEaVbnq3-1

*/

#include "../include/push_swap.h"

int	main(int ac, char *av[])
{
	char	**split_result;
	int		i;

	if (ac > 1)
	{
		if (ac == 2)
		{
			split_result = ft_split(av[1], ' ');
			i = 0;
			while (split_result[i])
				i++;
			if (i > 1)
			{
				if (ft_check_argv_are_valid(ac, split_result))
					return (1);
				push_swap(i, split_result);
			}
			return (0);
		}
		else
		{
			if (ft_check_argv_are_valid(ac, av))
				return (1);
			push_swap(ac - 1, av + 1);
		}
	}
	return (0);
}
