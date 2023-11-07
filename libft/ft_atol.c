/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:05:19 by castorga          #+#    #+#             */
/*   Updated: 2023/05/19 16:05:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reads a String, and, after ignoring spaces with ft_isspace, saves the string 
into an integer*/

/*
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
     by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

IMPLEMENTATION NOTES
     The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.

     The strtol() and strtol_l() functions are recommended instead of atoi()
     and atoi_l() functions, especially in new code.
*/

#include "libft.h"

long	ft_atol(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	i++;
	return (res * sign);
}

/*
int	main(void)
{
	char	*s = "+-54";
	//const char *s = "   ---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
	return (0);
}
*/
