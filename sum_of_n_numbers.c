#include<stdio.h>

int main() {
	int num,i,sum=0;
	printf ("Enter your number of series: ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++) {
		sum+=i;
		printf("The number value is %d \n",sum);
	}
	return 0;
}

