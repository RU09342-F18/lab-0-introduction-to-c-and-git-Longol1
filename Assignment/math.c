#include <stdio.h>
#include "math.h"
int main()
{
    int n1, n2;
    char Letter;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, n2);
    
    printf("Enter Char A-J: ");
    scanf("%c", Letter);
    
    math(n1, n2, Letter);
    
    
    return 0;
}

int math(int num1, int num2, char Operator)
{
    int add, subtract, divide, modulus, left_shift, right_shift;
    int AND, OR, XOR, Inverse1, Inverse2;
    
    switch(Operator){
        case 'A':
            add = num1 + num2;
            printf("Addition = %d", add);
            break;
        case 'B':
            subtract = num1 - num2;
            printf("Subtraction = %d", subtract);
            break;
        case 'C':
            divide = num1 / num2;
            printf("Division = %d", divide);
            break;
        case 'D':
            modulus = num1 % num2;
            printf("Modulus = %d", modulus);
            break;
        case 'E':
            left_shift = num1 << num2;
            printf("Shift Left = %d", left_shift);
            break;
        case 'F':
            right_shift = num1 >> num2;
            printf("Shift Right = %d", right_shift);
            break;
        case 'G':
            AND = num1 & num2;
            printf("AND = %d", AND);
            break;
        case 'H':
            OR = num1 | num2;
            printf("OR = %d", OR);
            break;
        case 'I':
            XOR = num1 ^ num2;
            printf("XOR = %d", XOR);
            break;
        case 'J':
            Inverse1 = ~num1;
            Inverse2 = ~num2;
            printf("Inverse of Number 1 = %d", Inverse1);
            printf("Inverse of Number 2 = %d", Inverse2);
            break;
    }
    
    
}
