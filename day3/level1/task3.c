#include<stdio.h>
int main() 
{
    int num,i,j;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    if (num < 1000 || num > 9999)
	 {
        printf("Invalid input. The number should be a 4-digit number.\n");
        return 1;
    }
    int largest = 0;
    
    
    for ( i = 0; i < 4; i++)
	 {
        int temp = num;
        int divisor = 1;
        
       
        for (j = 0; j < i; j++)
            divisor *= 10;
        
        temp = temp / (divisor * 10) * divisor + temp % divisor;
        
        
        if (temp > largest)
            largest = temp;
    }
    
    printf("Largest number after deleting a digit: %d\n", largest);
    
    return 0;
}
