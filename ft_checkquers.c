#include "push_swap.h"

int ft_check_chars(char **argv)
{
    int i;
    int j;

    i = 1;
	printf("ingreso a ft_check_chars\n");
    while (argv[i])
    {
		j = 0;
        while (argv[i][j])
        {
			printf("%d\t%d\t%d\n",(argv[i][j]), i ,j );
            if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' && argv[i][j] != '-' && argv[i][j] != '+')
			{
				printf("primer if\n");
				return (-1);
			}
			if (!ft_isdigit(argv[i][j]) && ((argv[i][j] == '+' || argv[i][j] == '-') && (!ft_isdigit(argv[i][j + 1]))))
			{
				printf("second if\n");
				return (-1);
			}
            j++;
        }
        i++;
    }
	return(0);
}

int	ft_check_string(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (argv[i])
	{
		if (!ft_strlen(argv[i]))
			return (-1);
		j = 0;
		count = 0;

		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
				count++;
			j++;
		}
		if (count == 0)
			return (-1);
		i++;
	}
	return (0);
}
int ft_check_limits(char **argv)	
{
	char **result;
	int i;
	int j;
	int num;

	i = 1;
	j = 0;
	while(argv[i])
	{
		result = ft_split(argv[i], ' ');
		if (!result)
			{
				printf("result = -1\n");
				return (-1);
			}
		while (result[j] != NULL)
		{
			num = ft_atoi(result[j]);
			printf("num es : %d\n", num);
			if (num == -1)
			{
				printf("num = -1\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int ft_check_duplicate(char **argv)
{
	char **num;
	int i;
	int j;
	int k;

	i = 1;
	while (argv[i])
	{
		num = ft_split(argv[i], ' ');
		j = 0;
		k = j + 1;
		printf("num[%d] es -> %s \n",j,num[j]);
		while (num[j] != NULL)
		{
			printf("ingreso en el while (num[k] != NULL)\n");
			printf("ft_atoi(num[j]) = %d y ft_atoi(num[k]) = %d", ft_atoi(num[j]), ft_atoi(num[k]));
			if (ft_atoi(num[j]) == ft_atoi(num[k]))
			{
				printf("ft_atoi um k %d y dde num j: %d\n", ft_atoi(num[k]), ft_atoi(num[j]));
				return(-1);
			}
			j++;
			k++;
		}
		i++;
		// argc--;
	}
	return (0);
}