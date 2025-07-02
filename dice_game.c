#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[100];

    printf("What is your name?\n> ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);

    srand(time(NULL));
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;

    printf("Rolling dice...\n");
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    if (total > 7) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
