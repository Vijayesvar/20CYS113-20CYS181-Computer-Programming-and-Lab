#include<stdio.h>
int main() {
double num1;
double num2;
int choice;
double add;
double sub;
double product;
double div;
printf("welcome to the calculator");
printf("input num1: ");
scanf("%f", &num1);
printf("input num2: ");
scanf("%f", &num2);
printf("what operation do you want to perform/n");
printf("enter/n");
printf("1-addition/n");
printf("2-subraction/n");
printf("3-multiplication/n");
printf("4-subraction/n");
scanf("%d",&choice);
if (choice=1) {
   add=num1+num2;
   printf("addition=%f",add);
}
else if (choice=2) {
   sub=num1-num2;
   printf("subraction=%f",sub);   
}
else if(choice=3) {
    product=num1*num2;
    printf("multiplication=%f",product);   
}
else if(choice=4) {
    div=num1/num2;
    printf("division=%f",div);
}    
return 0;      
}
