//#include <libft.h>
#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0') {
        if (*s == c) {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0') {
        return (char *)s;
    }
    return NULL;
}

/*
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main() {
    const char *s = "Hello, world!";
    int c = 'o';

    // Using strchr
    char *result_strchr = strchr(s, c);
    if (result_strchr != NULL) {
        printf("Using strchr: Character '%c' found at position: %ld\n", c, result_strchr - s);
    } else {
        printf("Using strchr: Character '%c' not found in the string\n", c);
    }

    // Using ft_strchr
    char *result_ft_strchr = ft_strchr(s, c);
    if (result_ft_strchr != NULL) {
        printf("Using ft_strchr: Character '%c' found at position: %ld\n", c, result_ft_strchr - s);
    } else {
        printf("Using ft_strchr: Character '%c' not found in the string\n", c);
    }

    return 0;
}*/