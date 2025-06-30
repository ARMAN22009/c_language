#include<stdio.h>
int main(){
    char str1[47];
    puts("enter the string ");
    scanf("%[^\n]s",str1);
    puts("size of string ");
    int size=0,i=0;
    while(str1[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}