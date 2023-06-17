#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(void*,void* ,int );

void swap(void* a, void* b, int s){
    void* tmp = malloc(s);
    memcpy(tmp, a, s);
    memcpy(a, b, s);
    memcpy(b, tmp, s);
    free(tmp);
}
int main()
{
	char a='a';
	char b='b';
	swap(&a,&b,sizeof(a));
	printf("%c %c",a,b);
}
