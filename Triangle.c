#include <stdio.h>

int main() {
    //Declaring variables
    int rows;

    //Gathering input from user
    printf ("Enter the number of rows in the triangle: ");
    scanf ("%d", &rows);

    //Validating input
    if (rows <= 0) {
        printf ("Invalid input.");
    }

    //Printing first row
    if (rows >= 1) {
        for (int i = 1; i <= (rows - 1); i++) {
            printf (" ");
        }
        printf ("*");
        if (rows > 1) {
            printf ("\n");
        }
    }

    //Printing all rows except the first and last
    for (int i = 1; i <= (rows - 2); i++) {
        for (int j = 1; j <= (rows - 1 - i); j++) {
            printf (" ");
        }
        printf ("*");
        for (int j = 1; j <= ((2*i) - 1); j++) {
            printf (" ");
        }
        printf ("*\n");
    }

    //Printing last row
    if (rows > 1) {
        for (int i = 1; i <= ((2*rows) - 1); i++) {
            printf ("*");
        }
    }

    return 0;
}