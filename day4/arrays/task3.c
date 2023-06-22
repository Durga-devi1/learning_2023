#include <stdio.h>
int main() {
    int array[100],n,i;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for( i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    
    printf("Original Array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    
    int start = 0;
    int end = n- 1;
    
    while (start < end) {
        // Swap the elements
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        // Move the pointers
        start++;
        end--;
    }
    
    printf("\nReversed Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

