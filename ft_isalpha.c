#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main() {
    char test_chars[] = {'A', 'b', '5', '!', '\n'};
    int num_test_chars = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Character\tisalpha\tft_isalpha\n");
    printf("---------------------------------\n");
    for (int i = 0; i < num_test_chars; i++) {
        printf("%c\t\t%d\t\t%d\n", test_chars[i], isalpha(test_chars[i]), ft_isalpha(test_chars[i]));
    }

    return 0;
}