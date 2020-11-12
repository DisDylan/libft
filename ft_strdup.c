#include "libft.h"

char *ft_strdup(const char *s)
{
	const char *str;
	int i;

	i = 0;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof(*str) * i)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}