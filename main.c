#include <stdio.h>

int main()
{
    int n1;
    int op;
    char operator = "+";
    int n2;
    int output;
    int pr_out = 1;
 
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
    	if (n2 == 0){
    		printf("You cant divide by 0!!!11!\n");
    		pr_out = 0;
    	}else{
			output = n1 / n2;
		}
    }/*else if(operator == '^'){
      output = power(n1, n2);
    }*/
	if(pr_out == 1){
    	printf("%d %c %d = %d", n1, operator, n2, output);
	}
    return 0;
}
