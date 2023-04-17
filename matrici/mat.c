#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funzioni.h"
#define dim 5
int main(){

int scalare = 2;
float mediam = 0;
int matrice [dim][dim];
int matrice2 [dim][dim];
int matrice3[dim][dim];
srand(time(NULL));
carica(matrice);
carica(matrice2);
carica(matrice3);

somma(matrice,matrice2,matrice3);
stampa(matrice);
mediam = media(matrice);
printf("%f",mediam);
moda(matrice);
media_righe(matrice);
media_colonne(matrice);
moda_per_riga(matrice);
moda_per_colonna(matrice);
mediana(matrice);



return 0;
}