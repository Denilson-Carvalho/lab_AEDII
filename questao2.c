#include <stdio.h>
#include <stdlib.h>

//converter todos os números em dias, calcular a diferença, cconverter em semanas e
//multiplicar por 2.
int diasDeAula(int dia, int mes, int ano){
    int dia_atual, ultimo_dia, n_aulas;
    dia_atual = dia + mes*30 + ano*365;
    ultimo_dia = 21 + 10*30 + 2023*365;
    n_aulas = ((ultimo_dia - dia_atual)/7)*2;

    return n_aulas;
}

int main(){

    int dia, mes, ano;

    printf("Digite a data: ");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    
    printf("Teremos %d aulas ate o fim do semestre.", diasDeAula(dia, mes, ano));
    
    return 0;
}