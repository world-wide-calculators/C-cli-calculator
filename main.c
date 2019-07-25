#include <stdio.h>

int main()
{
    int n1;
    int op;
    char operator = "+";
    int n2;
    int output;
 
    printf("Enter first integer: ");  
    
    scanf("%d", &n1);  
    
    printf("Enter an operator: ");
    scanf(" %c", &operator);
    
    printf("Enter second integer: ");
    scanf("%d", &n2);
    
    if(operator == '+'){
      output = n1 + n2;
    }else if(operator == '-'){
      output = n1 - n2;
    }else if(operator == '*'){
      output = n1 * n2;
    }else if(operator == '/'){
      output = n1 / n2;
    }/*else if(operator == '^'){
      output = power(n1, n2);
    }*/
    printf("%d %c %d = %d", n1, operator, n2, output);
    return 0;
}
