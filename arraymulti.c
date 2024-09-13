#include <stdio.h>

int main() {
    int arr[3][10];  // Array to store multiplication tables (3 rows, 10 columns)

    // Populate the array with multiplication tables
    for (int i = 0; i < 3; i++) {
        int multiplier = 2 + 5 * i;  // Start with 2 and increment by 5 for each table (2, 7, 9)
        for (int j = 0; j < 10; j++) {
            arr[i][j] = multiplier * (j + 1);  // Multiply with (j + 1) to start from 1
        }
    }

    // Print the multiplication tables
    printf("Multiplication Tables:\n");
    for (int i = 0; i < 3; i++) {
        int multiplier = 2 + 5 * i;
        printf("Table of %d:\n", multiplier);
        for (int j = 0; j < 10; j++) {
            printf("%d * %d = %d\n", multiplier, j + 1, arr[i][j]);
        }
        printf("\n");  // Add a newline after each table
    }

    return 0;
}
