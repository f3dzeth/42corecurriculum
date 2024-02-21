#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
   unsigned char *d = dst;
   const unsigned char *s = src;

    if (d < s) {
        // Copy forward from src to dest
        size_t i = 0;
        while (i < len) {
            d[i] = s[i];
            i++;
        }
    } else if (d > s) {
        // Copy backward from src to dest to handle overlapping regions
        size_t i = len;
        while (i > 0) {
            d[i - 1] = s[i - 1];
            i--;
        }
    }

    return dst;
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n);

int main() {
    char dest[50] = "Destination";
    char dest2[50] = "Destination";
    const char src[] = "Source";

    // Using memmove
    memmove(dest, src, strlen(src) + 1);
    printf("dest after memmove: %s\n", dest);

    // Using ft_memmove
    ft_memmove(dest2, src, strlen(src) + 1);
    printf("dest2 after ft_memmove: %s\n", dest2);

    return 0;
}*/