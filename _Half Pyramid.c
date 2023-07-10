#include<stdio.h>

int main() {
    int num;
    scanf("%d",&num); 
    if (num<1 || num>24) {
        printf("Invalid Input"); 
    }
    else {
        for (int i=1;i<=num;++i) {
            for (int j=1;j<=i;++j) {
                printf("*  ");
            }
            printf("\n");
        } 
    }
}
