#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char ch;
	size_t i;

	i = 0;
	ch = ((unsigned char*)s1)[n];
	if (n == 0)
		return (0);
	while ((unsigned char*)s2)
	{
		if ((unsigned char)s2[i] == ch)
			return (n -i);
		i++;
	}
	return (1);
}