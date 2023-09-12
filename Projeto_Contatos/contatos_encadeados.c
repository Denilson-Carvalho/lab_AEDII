#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define size 32 //tamanho da tabela hash


struct Contato{
    char nome[20];
    char telefone[11];
    char email[20];
    struct no *prox;

};

struct no
{
    struct Contato contato;
    struct no *prox;
};

int concatenacao(char c[]){
    int key = 0, i = 0;
    char s = c[0];
    while(s != '\0'){ //\0 indica o fim da string
        key += c[i];
        i++;

    }

int funHashDiv(int key){
    return key % size;
}

int funHashMult(int key){
    srand(time(NULL));
    float random = rand()/RAND_MAX; 
    return key * random * size; //faz o mapeamento atribuindo um valor aleatório para cada chave.
}

typedef struct Contato *agendaDeContatos[size];

void iniciarAgenda(agendaDeContatos Hash){
    int i;
    foi(i=0; i<size; i++){
        Hsh[i] = 0;
        Hash[i] -> prox = NULL;
    }

}

int inserir(agendaDeContatos Hash, struct Contatos c){
    int key = concatenacao(c.nome);
    key = funHashMult(key);
    int key_inicio = key;

    while(1){
        if(Hash[key] != 0){
            Hash[key] = c;
            break;
        }
        key ++;
        if(key_inicio == key){
            break;
        }
        if(key > size){
            key = key%size;
            key_inicio = key;
        }
}




