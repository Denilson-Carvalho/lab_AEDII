#include <stdio.h>
#include <stdlib.h>

int y(int x1, int x2){
    if (x1 == 0 || x2 == 0) {
        return 0;
    } else if (x1 == 1) {
        return x2;
    } else if (x2 == 1) {
        return x1;
    } else {
        return x1 + y(x1, x2 - 1);
    }
}

int main(){
    int x1, x2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x1, &x2);

    int produto = calcularProdutoRecursivo(x1, x2);

    printf("Produto: %d\n", produto);
    
    return 0;
}