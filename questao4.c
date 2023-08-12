#include <stdio.h>
#include <stdlib.h>

int isPerfect(int n){
    int soma = 0;
    int i;
    for(i = 1; i <= n/2; i++){
        if((n%i) == 0){
            soma += i;
        }
    }
    if (soma == n){
        return 1;
    }else {
        return 0;
    }
}

int main(){

    int i, j;
    printf("INTEIROS PERFEITOS ENTRE 1 e 1000:\n");
    for (i = 1; i <= 1000; i++){
        if(isPerfect(i)==1){
            printf("%d = ", i);
            for(j = i; j <= i/2; j++){
                printf(" + %d", j);
            }
            printf(" => PERFEITO!\n");
        }
        
    }

    return 0;
}