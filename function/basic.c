#include<stdio.h>
void b(){
    printf("billa\n");//1//3
    return;
}


int main(){
    void a();        //     prototype
    b();
    a();

    return 0;
}
void a(){
    printf("billu\n");
   
  
    return;
}