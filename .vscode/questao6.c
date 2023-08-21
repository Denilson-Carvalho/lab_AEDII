#include <stdio.h>
#include <stdlib.h>

//definir o número invertido como parâmetro igual a 0.
//dividir o numero por 10 e armazenar o resto da divisão.
//multiplicar por 10 e somar o proximo número.

int inverter(int n, int invertido){

    while (n >= 1)
    {
        invertido = invertido*10 + n%10;
        n = n/10;
    }

    return invertido;
}

int inverter_recursivo(int n, int invertido){

    if (n == 0)
    {
        return invertido;
    }else{
        invertido = invertido * 10 + n%10;
        return inverter_recursivo(n/10, invertido);
    }
}


int main(){

    printf("%d", inverter_recursivo(48563, 0));
    return 0;
}