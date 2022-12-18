#include <stdio.h> 

double calculate(double num1, double num2, char operator) {

    double result;

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break; 
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error! operator is not correct");
            result = 0;
            break;
    }

    return result;
}

int main() {

    double num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    double result = calculate(num1, num2, operator);
    printf("Result: %.2lf", result);

    return 0;
}

 