//#include <libft.h>
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last_occ = NULL;
    while (*s != '\0') {
        if (*s == c) {
            last_occ = s;
        }
        s++;
    }
    if (c == '\0') {
        return (char *)s;
    }
    return (char *)last_occ;
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main() {
    const char *s = "Hello, world!";
    int c = 'o';

    // Using strrchr
    char *result_strrchr = strrchr(s, c);
    if (result_strrchr != NULL) {
        printf("Using strrchr: Character '%c' found at position: %ld\n", c, result_strrchr - s);
    } else {
        printf("Using strrchr: Character '%c' not found in the string\n", c);
    }

    // Using ft_strrchr
    char *result_ft_strrchr = ft_strrchr(s, c);
    if (result_ft_strrchr != NULL) {
        printf("Using ft_strrchr: Character '%c' found at position: %ld\n", c, result_ft_strrchr - s);
    } else {
        printf("Using ft_strrchr: Character '%c' not found in the string\n", c);
    }

    return 0;
}*/