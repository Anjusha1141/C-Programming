#include <stdio.h>

int main() {
    char ch;

    printf("Alphabets from A to Z:\n");

    for (ch = 'A'; ch <= 'Z'; ++ch) {
        printf("%c ", ch);
    }

    printf("\n");

    return 0;
}
