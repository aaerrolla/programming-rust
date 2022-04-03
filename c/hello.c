#include<stdio.h>

//  this programm supposed to produce some undegined behaviour 
//  but its not doing so in my m/c
// mine is adm 64 ,  debain 11   using gcc
// may be i need to compile using options  

int main(int argc, char **argv) {
    unsigned long a[1];
    a[3] = 0x7ffff7b3346cebUL;
    printf("%u" , a[3]);
    return 0;
}