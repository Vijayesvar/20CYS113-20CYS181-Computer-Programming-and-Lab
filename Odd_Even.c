#include<stdio.h>

int main() {
	int a;
	printf("Enter your number: ");
	scanf("%d",&a);

	if (a%2==0) {
		printf("The %d  is even\n",a);
	} else {
		printf("The %d is odd\n",a);
	}

	return 0;
}

