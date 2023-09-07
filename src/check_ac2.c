
#include "../include/push_swap.h"

/*----------SPLIT----------*/
char	**ft_if_ac_is_2(int ac, char *av[])
{
	char	**split_result;

	split_result = NULL;
	if (ac == 2)
	{
		if (!av[1][0])
			return (NULL);
		else
		{
			split_result = ft_split(av[1], ' ');
			if (!split_result)
				return (NULL);
			return (split_result);
		}
	}
	return (av);
}
