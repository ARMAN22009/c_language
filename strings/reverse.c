#include<stdio.h>
int main() {
    char str[22];
    puts("enter the string");
    gets(str);
    int size=0,i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("size:%d", size);
    

    return 0;
}