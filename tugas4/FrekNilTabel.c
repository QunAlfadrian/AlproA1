/* Nama File    		: FrekNilTabel.c */
/* Deskripsi    		: menentukan nilai tabel yang lebih dari satu */
/* Pembuat      		: Qun Alfadrian - 24060122130072 */
/*Tanggal Pembuatan		: 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int T[10] = {7, 4, 5, 7, 6, 5, 3 ,5, 1, 4};
    int i, j, n;
    int count;

    // Algoritma
    n = 10; // jumlah elemen tabel
    for (i=0;i<n;i++){
        count = 0;
        for (j=0;j<i;j++){
            if ((i != j) && (T[i] == T[j])){
                count++;
            }
        }

        if (count == 1){
            printf("%d\n", T[i]);
        }
    }
    
}
