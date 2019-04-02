#include <stdio.h>
#include <stdlib.h>

int contarPar (int* vec, int tam);

int main()

{
    int vec[]= {6,5,10,12,11,13,21,22,8,9};
    int par;

    par=contarPar(vec,10);
    printf("los numeros son %d", par);


    return 0;


}

int contarPar (int* vec, int tam){

int contador = 0;
int i;

for( i = 0 ; i < tam ; i++){

    if ( vec[i] % 2 == 0){
        contador = contador + 1;


    }


}
return contador;

}

