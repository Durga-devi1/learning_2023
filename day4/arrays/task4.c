#include <stdio.h>

int findDifference(int array[], int size) {
    int sumEven = 0;
    int sumOdd = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sumEven += array[i];  
        } else {
            sumOdd += array[i];   
        }
    }
    
    return sumEven - sumOdd;  
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
    
    printf("Difference between the sum of even and odd elements: %d\n", difference);
    
    return 0;
}

