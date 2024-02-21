//#include <libft.h>
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	size_t i = 0;

	while (i < n)
	{
		p[i] = 0;
		i++;
	}

}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char str2[50];

    // Using bzero
    bzero(str, sizeof(str));
    printf("str after bzero: %s\n", str);

    // Using ft_bzero
    ft_bzero(str2, sizeof(str2));
    printf("str2 after ft_bzero: %s\n", str2);

    return 0;
}*/