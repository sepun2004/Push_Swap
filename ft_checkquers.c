int ft_check_chars(char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (argv[i])
    {
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' && argv[i][j] != '-' && argv[i][j] != '+')
				return (-1);
			if (!ft_isdigit(argv[i][j]) && ((argv[i][j] == '+' || argv[i][j] == '-') && !ft_isdigit(argv[i][j + 1])))
				return (-1);
            
            j++;
        }
        i++;
    }
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
		if (!count)
			return (-1);
		i++;
	}
	return (0);
}