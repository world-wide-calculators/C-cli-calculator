#include <stdio.h>
#include <math.h>

int main()
{
    float n1;
    char operator = "+";
    char retry;
    float n2;
    float output;
    int pr_out = 1;
 	
 	do{
	    printf("Enter first integer: ");  
	    
	    scanf("%f", &n1);  
	    
	    printf("Enter an operator: ");
	    scanf(" %c", &operator);
	    
	    printf("Enter second integer: ");
	    scanf("%f", &n2);
	    
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
	    }else if(operator == '^'){
	      output = powf(n1, n2);
	    }
		if(pr_out == 1){
	    	printf("%f %c %f = %f\n\n", n1, operator, n2, output);
		}
		printf("Retry? (y/n)  ");
	    scanf(" %c", &retry);
	}while(retry == 'y');
    return 0;
}
