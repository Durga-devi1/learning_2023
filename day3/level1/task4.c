#include<stdio.h>
int main() 
{
    int count;
    int i;
    printf("Enter the count of numbers: ");
    scanf("%d", &count);

    int numbers[count];
    printf("Enter %d numbers: ", count);
    for ( i = 0; i < count; i++) 
	{
        scanf("%d", &numbers[i]);
    }
     int smallestDigit = 9;  // Initialize with highest possible value
    int largestDigit = 0;   // Initialize with lowest possible value

    for ( i = 0; i < count; i++) {
        int num = numbers[i];

        while (num != 0) {
            int digit = num % 10;
            if (digit < smallestDigit)
                smallestDigit = digit;
            if (digit > largestDigit)
                largestDigit = digit;
            num /= 10;
        }
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);


    return 0;
}
 
