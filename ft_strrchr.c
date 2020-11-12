#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i != -1)
	{
		if (s[i] == (const char)c)
			return (s[i]);
		i--;
	}
	return ('\0');
}