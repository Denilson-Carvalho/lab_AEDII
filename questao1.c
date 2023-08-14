#include <stdio.h>
#include <stdlib.h>

//colocar o número inteiro e mandar mostrar em caracter.
//alguns símbolos não aparecem.

int main(){
    
    int i, conta_linha = 0;

    for(i=0; i<=127; i++){
        printf("%c, ", i);
        if (conta_linha == 10){
            printf("\n");
            conta_linha = 0;
        }    
        conta_linha += 1;
    }

    return 0;
}