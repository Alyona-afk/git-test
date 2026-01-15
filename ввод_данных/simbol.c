#include <stdio.h>

int main(void) {
    char c;

    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("ASCII-код символа: %d\n", c);
    printf("Размер типа char: %zu byte\n", sizeof(char));

    return 0;
}

