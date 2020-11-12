#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char ch;

	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char*)src)[i] == ch)
		{
			return (&(unsigned char*)dest + i)
		}
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (0);
}