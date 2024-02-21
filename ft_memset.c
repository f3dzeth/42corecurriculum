 #include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    unsigned char v = (unsigned char)c;
    size_t i = 0;

    while (i < len) {
        p[i] = v;
        i++;
    }
    return p;
}