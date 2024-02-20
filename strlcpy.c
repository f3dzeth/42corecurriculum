//#include <libft.h>
#include <stddef.h>

size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t src_len = 0;
    size_t i = 0;

    while (src[src_len] != '\0')
        src_len++;
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dst[i] = '\0';
    return src_len;
}

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t size);

int main(void)
{
    char dest[20];
    const char *src = "Hello, world!";
    size_t destsize = sizeof(dest);
    size_t expected;
    size_t result;

    expected = strlcpy(dest, src, destsize);
    printf("strlcpy: Expected size: %zu, Destination: %s\n", expected, dest);

    char dest2[20];
    result = ft_strlcpy(dest2, src, destsize);
    printf("ft_strlcpy: Result: %zu, Destination: %s\n", result, dest2);

    return (0);
}
