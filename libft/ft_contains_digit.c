/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_digit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:49:18 by castorga          #+#    #+#             */
/*   Updated: 2023/09/14 12:49:21 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function that verifies if the c parameter is a digit or not*/
int	ft_contains_digit(char *c)
{
	if (ft_atoi(c) < 0)
	{
		return (1);
	}
	while (*c)
	{
		if (ft_isdigit(*c) == 0 && *c != ' ' && *c != '\"')
			return (0);
		c++;
	}
	return (1);
}
