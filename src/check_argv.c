/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:43:54 by castorga          #+#    #+#             */
/*   Updated: 2023/09/04 17:43:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_free()
{
	return (0);
}

/*----------CHECK DUPLICATES----------*/
int ft_check_duplic(char *av[], int ac)
{
    int i;
    int j;
    int len;

    i = 1;
    while (i < ac)
    {
        len = ft_strlen(av[i]);
        j = 0;
        while (av[i][j])
        {
            if (ft_strncmp(av[i], av[i + 1], len) == 0)
            {
                write(2, "Duplicated found!\n", 18);
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}


/*----------CHECK IF ARGV ARE VALID NUMBERS----------*/
char	**ft_check_argv_are_valid(int ac, char *av[])
{
	int		i;
	char	**nums;
	long	num;

	i = 1;
	nums = (char **)malloc(sizeof(char *) * (ac - 1));
	if (!nums)
		return (NULL);
	while (av[i])
	{
		num = ft_atoi(av[i]);
		if (num < INT_MIN || num > INT_MAX)
		{
			free(nums);
			write(2, "MIN/MAX Error\n", 14);
			return (NULL);
		}
		nums[i - 1] = ft_strdup(av[i]);
		i++;
	}
	return (nums);
}

