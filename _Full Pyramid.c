#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows); 

    if (rows <= 0 || rows > 24) {
        printf("Invalid Input"); 
        return 0;
    }
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        } 

        printf("\n");
    }

    return 0;
}
