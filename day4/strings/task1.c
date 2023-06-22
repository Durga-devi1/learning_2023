#include <stdio.h>

void toggleCase(char *str) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
           
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
          
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

int main() {
    char str[] = "lAnGuAGe";
    
    printf("Original string: %s\n", str);
    
    toggleCase(str);
    
    
    printf("Toggled case string: %s\n", str);
    
    return 0;
}

