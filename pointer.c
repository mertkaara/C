/**
 * C Programlama dilinde işaretçi (pointer) kavramı
 * ve uygulaması.
 */

#include <stdio.h>

int main () {
    int sayi = 10;
    int * isaretci;
    /* Sayi değişkeninin adresi, isaretci isimli 
     *pointer tipi değişken tarafından tutulacak
     */
    isaretci = &sayi;

    printf("Sayi degiskeninin adresi = %d\n",&sayi);
    printf("Sayi degiskeninin icerigi = %d\n",sayi);

    printf("isaretci degiskeninin adresi = %d\n", &isaretci);
    printf("isaretci degiskeninin icerigi = %d\n", isaretci);
    printf("isaretci degiskeninin isaret ettigi deger = %d\n", *isaretci);

    return 0;
}