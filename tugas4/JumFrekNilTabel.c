/* Nama File    		: JumFrekNilTabel.c */
/* Deskripsi    		: menentukan jumlah dari nilai tabel yang frekuensi lebih dari satu*/
/* Pembuat      		: Qun Alfadrian - 24060122130072 */
/*Tanggal Pembuatan		: 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Kamus
    int T[10] = {7, 4, 5, 7, 6, 5, 3 ,5, 1, 4};
    int i, j, n;
    int count, jumlah;

    // Algoritma
    n = 10; // jumlah elemen tabel
    jumlah = 0;
    for (i=0;i<n;i++){
        count = 1;
        for (j=0;j<=n;j++){
            if ((count == 1) && (i != j) && (T[i] == T[j])){
                jumlah += T[j];
                count--;
            }
        }
    }
    
    printf("%d", jumlah);
}
