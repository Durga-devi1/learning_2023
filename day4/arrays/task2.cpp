#include <stdio.h>

int main() {
	int array[100],n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    
    int min, max;
     min = array[0];  
    max = array[0];  

     for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];  
        }

        if (array[i] > max) {
            max = array[i];  
        }
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}

