#include<stdio.h>
#include<math.h>
char *decToHex(unsigned );
void binary(unsigned int );
char *decToHex(unsigned input)
{
    char *output = malloc(sizeof(unsigned) * 2 + 3);
    strcpy(output, "0x00000000");

    static char HEX[] = "0123456789ABCDEF";
    int index = 9;

    while (input > 0 ) {
        output[index--] = HEX[(input & 0xF)];
        input >>= 4;          
    }

    return output;
}

void binary(unsigned int num)
{
unsigned int mask=32768;  
printf("\nBinary Eqivalent : ");
 
while(mask > 0)
   {
   if((num & mask) == 0 )
         printf("0");
   else
         printf("1");
  mask = mask >> 1 ;  
   }
}
int main()
{
	unsigned int a;
	printf("enter the numbers\n");
	scanf("%u",&a);
	a=(unsigned int)exp(a);
	char* arr;
	arr=decToHex(a);
	printf("hexadecimal value is %s",arr);
	binary(a);
	
}
