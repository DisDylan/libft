#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	str = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		str[i] = (unsigned char)c;
		i++;
		n--;
	}
	s = (void *)str;
	return (s);
}