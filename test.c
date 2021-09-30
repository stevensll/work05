#include <stdio.h>

int main(){
    //1
    char c = 'c';   
    int i = 3;      
    long l = 2647;  
    printf("c: %c\t i: %d\tl: %ld\n\n", c, i, l);

    //2 
    printf("Hex address:\nchar : %p\tint: %p\t long: %p\n\n", &c, &i, &l);
    printf("Decimal adress: \nchar : %lu\tint: %lu\t long: %lu\n\n", &c, &i, &l);

    //3
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    // 4
    printf("Pointer adress: c: %p\ti: %p\t long:%p\n\n", cp,ip,lp);
    
    //5
  
}