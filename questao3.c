#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Triplos_Pitagoricos(int limite){
    int hipotenusa, a, b;
    int c1;
    int c2;
    for (c1 = 1; c1 < limite; c1++){
        for(c2 = 1; c2 < limite; c2++){
            
            a = c1*c1;
            b = c2*c2;
            hipotenusa = sqrt((a+b));
            if((a+b) == pow(hipotenusa,2)){
                printf("Cateto 1: %d Cateto 2: %d Hipotenusa: %d\n", c1, c2, hipotenusa);
            }
        }
    }
}

int main(){
    Triplos_Pitagoricos(20);
}