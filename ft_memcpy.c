#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
    char *d = dest;
    const char *s = src;

    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }

    return dest;
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char dest[50];
    char dest2[50];
    const char src[] = "Hello, world!";

    // Using memcpy
    memcpy(dest, src, strlen(src) + 1);
    printf("dest after memcpy: %s\n", dest);

    // Using ft_memcpy
    ft_memcpy(dest2, src, strlen(src) + 1);
    printf("dest2 after ft_memcpy: %s\n", dest2);

    return 0;
}*/