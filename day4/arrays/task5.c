#include <stdio.h>

int findDifference(int array[], int size) {
    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;
    int i;
    for ( i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndexed += array[i];  
        } else {
            sumOddIndexed += array[i];   
        }
    }
    
    return sumEvenIndexed - sumOddIndexed;  
}

int main() {
   int array[100],size,i;
    printf("enter the array size\n");
    scanf("%d",&size);
    printf("enter the numbers\n");
    for( i=0;i<size;i++)
    {
    scanf("%d",&array[i]);
    }
    
    int difference = findDifference(array, size);
    
    printf("Difference between the sum of even-indexed and odd-indexed elements: %d\n", difference);
    
    return 0;
}

