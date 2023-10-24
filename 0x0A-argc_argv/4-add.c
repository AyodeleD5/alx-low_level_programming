#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];

        // Check if the argument contains only digits
        bool isPositive = true;
        for (int j = 0; arg[j] != '\0'; j++) {
            if (arg[j] < '0' || arg[j] > '9') {
                isPositive = false;
                break;
            }
        }

        if (!isPositive) {
            printf("Error\n");
            return 1;
        }

        int num = atoi(arg);
        if (num <= 0) {
            printf("Error\n");
            return 1;
        }

        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}

