#include <stdio.h>

int add(int number1, int number2){

    return (number1 + number2);
}

int main () {
    int num1;
    int num2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);
    sum = add(num1, num2);

    printf("SUM: %2d", sum);
    return 0;
}