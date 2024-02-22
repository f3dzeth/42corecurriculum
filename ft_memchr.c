//#include <libft.h>
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = s;
    unsigned char uc = c;
    size_t i = 0;
    while (i < n)
    {
    	if (p[i] == uc)
            return (void *)(p + i);
        i++;
    }
    return NULL;
}

/*

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main() {
    const char *s = "Hello, world!";
    int c = 'o';
    size_t n = strlen(s);

    // Using memchr
    void *result_memchr = memchr(s, c, n);
    if (result_memchr != NULL) {
        printf("Using memchr: Character '%c' found at position: %ld\n", c, (char *)result_memchr - s);
    } else {
        printf("Using memchr: Character '%c' not found in the string\n", c);
    }

    // Using ft_memchr
    void *result_ft_memchr = ft_memchr(s, c, n);
    if (result_ft_memchr != NULL) {
        printf("Using ft_memchr: Character '%c' found at position: %ld\n", c, (char *)result_ft_memchr - s);
    } else {
        printf("Using ft_memchr: Character '%c' not found in the string\n", c);
    }

    return 0;
}
*/