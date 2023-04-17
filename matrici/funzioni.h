#include <stdio.h>
#include <stdlib.h>
#define dim 5


void somma(int m[dim][dim], int m2[dim][dim], int som[dim][dim]){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            som[i][j] = m[i][j] + m2[i][j];
        }
    }
}

float media(int m[dim][dim]){
    int somma = 0;
    float media = 0;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            somma += m[i][j];
            media = somma / (dim * dim);
        }
    }
    return media;
}

void stampa(int m[dim][dim]){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void carica(int m[dim][dim]){
    int index = 1;
     for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            m[i][j] = rand() % 20 + 1;
        }
    }
}


void moda(int m[dim][dim]) {

    int occorrenze[100] = {0};
    int occorenze_max = 0;

    // Conta le occorrenze di ogni numero nella matrice
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            int num = m[i][j];
            occorrenze[num]++;

            if (occorrenze[num] > occorenze_max) {
                occorenze_max = occorrenze[num];
            }
        }
    }

    // Stampa i numeri che occorrono più spesso
    printf("\nLa moda della matrice è: ");

    for (int num = 0; num < 100; num++) {
        if (occorrenze[num] == occorenze_max) {
            printf("%d ", num);
        }
    }

    printf("\n");
}

void moda_per_riga(int m[dim][dim]) {
    for (int i = 0; i < dim; i++) {
        int occorrenze[100] = {0};
        int occorenze_max = 0;

        // Conta le occorrenze di ogni numero nella riga i-esima
        for (int j = 0; j < dim; j++) {
            int num = m[i][j];
            occorrenze[num]++;

            // Trova l'occorrenza massima
            if (occorrenze[num] > occorenze_max) {
                occorenze_max = occorrenze[num];
            }
        }

        // Stampa i numeri che occorrono più spesso nella riga i-esima
        printf("\nLa moda della riga %d è: ", i);
        for (int num = 0; num < 100; num++) {
            if (occorrenze[num] == occorenze_max) {
                printf("%d ", num);
            }
        }
        printf("\n");
    }
}

void moda_per_colonna(int m[dim][dim]) {
    for (int j = 0; j < dim; j++) {
        int occorrenze[100] = {0};
        int occorenze_max = 0;

        // Conta le occorrenze di ogni numero nella colonna j-esima
        for (int i = 0; i < dim; i++) {
            int num = m[i][j];
            occorrenze[num]++;

            // Trova l'occorrenza massima
            if (occorrenze[num] > occorenze_max) {
                occorenze_max = occorrenze[num];
            }
        }

        // Stampa i numeri che occorrono più spesso nella riga i-esima
        printf("\nLa moda della colonna %d è: ", j);
        for (int num = 0; num < 100; num++) {
            if (occorrenze[num] == occorenze_max) {
                printf("%d ", num);
            }
        }
        printf("\n");
    }
}

void mediana(int m[dim][dim]) {
    int n = dim * dim;
    int a[n];
    int k = 0;

    // copiamo tutti gli elementi della matrice nell'array
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            a[k++] = m[i][j];
        }
    }

    // Ordiniamo gli elementi in ordine crescente
    for (int i = 0; i < n; i++) {
        for (int o = 0; o < n-1; o++) {
            if (a[o] > a[o+1]) {
                int temp = a[o+1];
                a[o+1] = a[o];
                a[o] = temp;
            }
        }
    }

    // Calcoliamo la mediana
    int mediana;
    if (n % 2 == 0) {
        mediana = (a[n/2-1] + a[n/2]) / 2;
    } else {
        mediana = a[n/2];
    }
    printf("La mediana:%d",mediana);
}


void media_righe(int m[dim][dim]) {
  float media;
  
  for (int i = 0; i < dim; i++) {
    int somma = 0;
    for (int j = 0; j < dim; j++) {
      somma += m[i][j];
    }
    media = (float)somma/dim;
    printf("\nLa media della riga %d è: %f", i, media);
  }
}

void media_colonne(int m[dim][dim]){
    float media;
  
  for (int i = 0; i < dim; i++) {
    int somma = 0;
    for (int j = 0; j < dim; j++) {
      somma += m[j][i];
    }
    media = (float)somma/dim;
    printf("\nLa media della colonna %d è: %f", i, media);
  }
}










    