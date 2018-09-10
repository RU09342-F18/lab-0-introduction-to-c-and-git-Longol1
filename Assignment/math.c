#include <stdio.h>
#include "math.h"
int main()
{
    int n1, n2; 
    char Letter; //These variables are used to take user input
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, n2);
    
    printf("Enter Char A-J: ");
    scanf("%c", Letter);
    
    math(n1, n2, Letter); //used the user inputted data to run the math function
    
    
    return 0;
}

int math(int num1, int num2, char Operator) //defining the math function
{
    int add, subtract, divide, modulus, left_shift, right_shift;
    int AND, OR, XOR, Inverse1, Inverse2;
    //variables used for all the different functions
    
    //switch statement is used to cycle through all the different functions required in the lab
    switch(Operator){
        case 'A':
            add = num1 + num2; //add function
            printf("Addition = %d", add);
            break;
        case 'B':
            subtract = num1 - num2; //subtract function
            printf("Subtraction = %d", subtract);
            break;
        case 'C':
            divide = num1 / num2; //divide function
            printf("Division = %d", divide);
            break;
        case 'D':
            modulus = num1 % num2; //modulus function
            printf("Modulus = %d", modulus);
            break;
        case 'E':
            left_shift = num1 << num2; //left shift function
            printf("Shift Left = %d", left_shift);
            break;
        case 'F':
            right_shift = num1 >> num2; //right shift function
            printf("Shift Right = %d", right_shift);
            break;
        case 'G':
            AND = num1 & num2; //and function
            printf("AND = %d", AND);
            break;
        case 'H':
            OR = num1 | num2; //or function
            printf("OR = %d", OR);
            break;
        case 'I':
            XOR = num1 ^ num2; //XOR function
            printf("XOR = %d", XOR);
            break;
        case 'J':
            Inverse1 = ~num1; //Inverse function number 1
            Inverse2 = ~num2; //Inverse function number 2
            printf("Inverse of Number 1 = %d", Inverse1);
            printf("Inverse of Number 2 = %d", Inverse2);
            break;
        default :
            printf("Invalid");
    }
    
    
}
