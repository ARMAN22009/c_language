#include<stdio.h>
#include<string.h>
int main(){
    char str[30],str1[30];
    gets(str);

    scanf("%[^\n]s",str1);
   
   
    puts(str);
    printf("%s",str1);
    
    return 0;
}