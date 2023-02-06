//
// Created by user on 06.02.2023.
//

#ifndef LABORATORUL_1_MATRICE_DE_ADIACENTA_H
#define LABORATORUL_1_MATRICE_DE_ADIACENTA_H
#include <malloc.h>
#include <stdio.h>

int n,m;
int **matrice_de_adiacenta;
int **alocare(int n ){
    int **a= (int **)malloc(n * sizeof(int *));
    for(int i = 0; i <n; i++){
        a[i] = (int *)malloc(n * sizeof(int));
    }
    return a;
}
void citire1() {

    int x, y;
    printf("Introduceti numarul de noduri: ");
    scanf("%i", &n);
    printf("Introduceti numarul de muchii: ");
    scanf("%i", &m);
    matrice_de_adiacenta = alocare(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrice_de_adiacenta[i][j] = 0;
    int k;
    printf("\n1--- Graf orientat");
    printf("\n2--- Graf neorientat");
    scanf("%i",&k);
    switch (k) {
        case 1:{{
                for (int i = 0; i < m; i++) {
                    printf("\nMuchia %i:\n", i + 1);
                    printf("\nNodul din care porneste :");
                    scanf("%i", &x);
                    printf("\nNodul spre care se indreapta :");
                    scanf("%i", &y);
                    if (x > n || y > n) printf("\nERORE! Nu exista asa nod");
                    else {
                        matrice_de_adiacenta[x - 1][y - 1] = 1;
                    }
            }break;}
        case 2:{
            for (int i = 0; i < m; i++) {
                printf("\nMuchia %i:\n", i + 1);
                printf("\nPrimul nod   :");
                scanf("%i", &x);
                printf("\nUltimul nod :");
                scanf("%i", &y);
                if (x > n || y > n) printf("\nERORE! Nu exista asa nod");
                else {
                    matrice_de_adiacenta[x - 1][y - 1] = 1;
                    matrice_de_adiacenta[y - 1][x - 1] = 1;
                }
            };break;}
        default: printf("Optiunea data nu exista in meniu!");

    }



    }

}
void afisare1() {

    printf("\nMatricea de adiacenta:");

    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("\t%i", matrice_de_adiacenta[i][j]);

        }
    }

}



#endif //LABORATORUL_1_MATRICE_DE_ADIACENTA_H
