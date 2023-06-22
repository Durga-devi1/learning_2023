#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    printf("enter the numbers");
    scanf("%s",str);
    int num = atoi(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}

