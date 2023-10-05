/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:24:10 by castorga          #+#    #+#             */
/*   Updated: 2023/10/05 10:24:13 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ------- ORDENAMIENTO PARA VALORES MAYORES A 5 NUMs ---------------*/
void	ft_order_more_5(t_stack *a, t_stack *b)
{
	// step1: pasar 2 primeros a B (check si es min)
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	//step2: En B: llevar al max arriba(ordenar b)

	//step3: pb (check si es min) si es moverlo al final(ordenar b)

	//step4: hacer pb(y lo demas), hasta dejar 3 elem en A

	//step4: ordenar A menor a mayor

	//step5: pa y al pasarlo checkear si se esta en la pos. correcta,
	//si no lo está, se debe rotar A hasta que este en la pos. correcta
	// y ahora si pa.

	//step6: ordeno A de > a <

	//repito 5 y 6 hasta dejar en B al min

	//rra twice y pa

	//checkear si esta ordenado
}
