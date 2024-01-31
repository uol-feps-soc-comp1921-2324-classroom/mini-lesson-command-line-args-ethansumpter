#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: ./task <num1> <num2>\n");
        return 0;
    }

    // Calculate and print the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
