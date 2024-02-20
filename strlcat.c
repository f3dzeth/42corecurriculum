// #include <libft.h>
#include <stdlib.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	dest_len = 0;
	unsigned int	src_len = 0;
	unsigned int	i = 0;

	while(dst[dest_len] != '\0' && dest_len < dstsize)
		dest_len++;
	while(src[src_len] != '\0')
		src_len++;
	if (dest_len >= dstsize)
		return(dstsize + src_len);
	while(src[i] != '\0' && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);

int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t destsize = sizeof(dest);
    size_t expected;
    size_t result;

    expected = strlcat(dest, src, destsize);
    printf("strlcat: Expected size: %zu, Result: %zu, Destination: %s\n", expected, strlen(dest), dest);

    char dest2[20] = "Hello, ";
    result = ft_strlcat(dest2, src, destsize);
    printf("ft_strlcat: Result: %zu, Destination: %s\n", strlen(dest2), dest2);

    return (0);
}