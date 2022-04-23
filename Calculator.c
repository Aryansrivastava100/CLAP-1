#include <stdio.h>
int main()
{
    int a,b,multiply,divide,sum,subtract;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    sum=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;
    printf("sum = %d\n",sum);
    printf("subtract = %d\n",subtract);
    printf("multiply = %d\n",multiply);
    printf("divide = %d\n",divide);
    return 0;
} 
