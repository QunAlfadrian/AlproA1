/******************************************************************************/ 
/* Nama      : Qun Alfadrian Setyowahyu Putro */
/* NIM       : 24060122130072 */
/* Nama File : jumPrimaProc.c */
/* Deskripsi : deret bilangan prima dan jumlah deret bilangan prima */
/******************************************************************************/ 
#include <stdio.h>
#include <stdlib.h>

void JumPrima(int n){
    /* Kamus Lokal */
    int i, j;
    int jumFaktor, jumPrima, counter;
    int *arrPrima;

    /* algoritma */
    arrPrima = (int*)malloc(1*sizeof(int));
    jumPrima = 0;
    counter = 0;

    if (n<=0){
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    } else {
        for (i=0;i<=n;i++){
            jumFaktor = 0;
            for (j=1;j<i;j++){
                if (i%j == 0){
                    jumFaktor++;
                }
            }

            if (jumFaktor == 1){
                counter++;
                arrPrima = realloc(arrPrima, counter*sizeof(int));
                arrPrima[counter-1] = i;

                // tambahkan i ke jumPrima
                jumPrima += i;
            }
        }

        for (i=0;i<counter;i++){
            if (i==counter-1){
                printf("%d dengan Jumlahan Deret Bilangannya adalah Sn=%d", arrPrima[i], jumPrima);
            } else {
                printf("%d+", arrPrima[i]);
            }
        }
    }
}

int main(){
    int n;

    n = 15;
    JumPrima(n);
}