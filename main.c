        #include <stdio.h>
        #include <stdlib.h>
        #include"matrice_de_adiacenta.h"
        #include "Matrice_de_incidenta.h"

            int main() {
           int k=1;
           while(k!=0){
               printf("\n1--- Matrice de incidenta");
               printf("\n2--- Matrice de adiacenta");
               printf("\n3--- Lista");
               printf("\n0--- Iesire din program \n");
               scanf("%i",&k);
               switch (k) {
                   case 1:{citire();afisare();break;}
                   case 2:{citire1();afisare1();break;}
                   case 3:{ system("cls"); printf("3");break;}
                   default: printf("Optiunea data nu exista in meniu!");

               }
           }
            return 0;
        }
