//
// Created by user on 03.02.2023.
//

#ifndef LABORATORUL_1_MATRICE_DE_INCIDENTA_H
#define LABORATORUL_1_MATRICE_DE_INCIDENTA_H
#include <malloc.h>
#include <stdio.h>

int n,m;
int **matrice_de_incidenta;
int **alocare1(int n,int m ){
    int **a= (int **)malloc(n * sizeof(int *));
    for(int i = 0; i <n; i++){
        a[i] = (int *)malloc(m * sizeof(int));
    }
    return a;
}
void citire() {

    int x, y;
    printf("Introduceti numarul de noduri: ");
    scanf("%i", &n);
    printf("Introduceti numarul de muchii: ");
    scanf("%i", &m);
    matrice_de_incidenta = alocare1(n,m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrice_de_incidenta[i][j] = 0;
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
                        matrice_de_incidenta[x - 1][i] = 1;
                        matrice_de_incidenta[y-1][i]=-1;
                    }

                }
        }break;}
        case 2:{{
                for (int i = 0; i < m; i++) {
                    printf("\nMuchia %i:\n", i + 1);
                    printf("\nNodul 1 :");
                    scanf("%i", &x);
                    printf("\nNodul 2:");
                    scanf("%i", &y);
                    if (x > n || y > n) printf("\nERORE! Nu exista asa nod");
                    else {
                        matrice_de_incidenta[x-1][i] = 1;
                        matrice_de_incidenta[y-1][i]=1;
                    }

                }
            };break;}
        default: printf("Optiunea data nu exista in meniu!");

    }




}
void afisare() {

    printf("\nMatricea de incidenta:");

    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++) {
            printf("\t%i", matrice_de_incidenta[i][j]);

        }
    }

}

#endif //LABORATORUL_1_MATRICE_DE_INCIDENTA_H
