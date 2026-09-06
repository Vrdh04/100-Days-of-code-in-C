#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*vardhjain0408@Vardhs-MacBook-Air ~ % gcc opptrianglepattern.c -o opptrianglepattern
vardhjain0408@Vardhs-MacBook-Air ~ % ./opptrianglepattern 
* 
* * 
* * * 
* * * * 
* * * * * 
vardhjain0408@Vardhs-MacBook-Air ~ % */