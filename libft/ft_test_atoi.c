/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:02:26 by castorga          #+#    #+#             */
/*   Updated: 2023/11/07 11:02:29 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_test_atoi(const char *str)
{
	int		i;
	long	res;

	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

/*int	main(void)
{
	char	*s = "-5e45";
	//const char *s = "   ---+--+1234ab567";

	printf("%ld\n", ft_test_atoi(s));
	return (0);
}
*/