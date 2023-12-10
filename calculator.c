#include <stdio.h>

int main() {
 double num1, num2, num3, num4;
 char operation;

 printf("Please enter an operation(+, -, *, /): ");
 scanf("%c", &operation);
 printf("Please input 1-4 rational numbers down to .001: ");
 scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

 switch(operation) {
 case '+':
    printf("%.3lf + %.3lf + %.3lf + %.3lf = %.3lf\n", num1, num2, num3, num4, num1+num2+num3+num4);
    return 0;
    break;
 
 case '-':
    printf("%.3lf - %.3lf - %.3lf - %.3lf = %.3lf\n", num1, num2, num3, num4, num1-num2-num3-num4);
    return 0;
    break;

 case '*':
    printf("%.3lf * %.3lf * %.3lf * %.3lf = %.3lf\n", num1, num2, num3, num4, num1*num2*num3*num4);
    return 0;
    break;

 case '/':
    printf("%.3lf ÷ %.3lf ÷ %.3lf ÷ %.3lf = %.3lf\n", num1, num2, num3, num4, num1/num2/num3/num4);
    return 0;
    break;

 default:
    printf("Invalid operation");
    return -1;
    break;
 }
 
 return 0;
}