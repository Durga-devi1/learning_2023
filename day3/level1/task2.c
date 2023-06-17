#include<stdio.h>
int main() 
{
    unsigned int num;
    
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    
    printf("Bits: ");
   int i;
    unsigned int mask = 1 << 31; 
    
    for (i = 0; i < 32; i++)
	 {
       
        if (num & mask)
            printf("1");
        else
            printf("0");
        
       
        mask >>= 1;
    }
    printf("\n");
    
    return 0;
}

