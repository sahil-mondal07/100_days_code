//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){
    int n1,n2, result;
    char op;

    printf("enter num 1 : ");
    scanf("%d", &n1);

    printf("enter num 2 : ");
    scanf("%d", &n2);

    printf("enter the operator(+,-,*,/,%%) : ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("result = %d\n", n1+n2);
        break;

    case '-':
        printf("result = %d\n", n1-n2);
        break;
    
    case '*':
        printf("result = %d\n", n1*n2);
        break; 
    
    case '/':
        if(n2!=0){
            printf("result = %d\n", n1/n2);
        }else{
            printf("division by 0 not possible");
        }
        
        break;
    
    case '%':
        if(n2!=0){
            printf("result = %d\n", n1%n2);
        }else{
            printf("error not possible");
        }
        
        break;
    
    default:
        printf("invalid operator");
        break;
    }


    return 0;
}