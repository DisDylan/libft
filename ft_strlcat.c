#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t total;

    i = ft_strlen(dst);
    total = ft_strlen(src);
    total += i;
    j = 0;
    if (size > 0 && i < size)
    {
        while ((i + j) < size && src[j])
        {
            dst[i + j] = src[j];
            j++;
        }
        dst[i + j] = '\0';
    }
    return (total);
}