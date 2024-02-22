//#include <libft.h>
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    if (*needle == '\0') {
        return (char *)haystack;
    }

    while (*haystack != '\0' && len > 0) {
        size_t i = 0;
        while (haystack[i] == needle[i] && needle[i] != '\0' && len - i > 0) {
            i++;
        }
        if (needle[i] == '\0') {
            return (char *)haystack;
        }
        haystack++;
        len--;
    }

    return NULL;
}

/*
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = 13; // Maximum number of characters to search

    // Using strnstr
    char *result_strnstr = strnstr(haystack, needle, len);
    if (result_strnstr != NULL) {
        printf("Using strnstr: Substring '%s' found at position: %ld\n", needle, result_strnstr - haystack);
    } else {
        printf("Using strnstr: Substring '%s' not found in the string\n", needle);
    }

    // Using ft_strnstr
    char *result_ft_strnstr = ft_strnstr(haystack, needle, len);
    if (result_ft_strnstr != NULL) {
        printf("Using ft_strnstr: Substring '%s' found at position: %ld\n", needle, result_ft_strnstr - haystack);
    } else {
        printf("Using ft_strnstr: Substring '%s' not found in the string\n", needle);
    }

    return 0;
}
*/