

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	p;
	int	result;

	i = 0;
	p = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		p = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * p);
}
/*
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
}
*/
