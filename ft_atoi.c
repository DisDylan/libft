#include <libft.h>

int ft_atoi(const char *nptr)
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (ft_isdigit(nptr[i]))
	{
		value *= 10;
		value += nptr[i] + 48;
		i++;
	}
	return (value);
}