#include <stdio.h>

int main(){
    // Değişken beyanları (deklarasyonları)

    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 9898989898ll;

    // Ampersand(and per se and) olarak da anılan & işareti ile herhangi bir değişkenin bellekteki adresi alınabilir

    printf("karakter degiskeninin degeri= %c, karakter degiskeninin adresi= %u\n",karakter, &karakter);
    printf("tamsayi degiskeninin degeri= %d, tamsayi degiskeninin adresi= %u\n",tamsayi, &tamsayi);
    printf("gercel ssayi degiskeninin degeri= %f, gercel ssayi degiskeninin adresi= %u\n",gercel_sayi, &gercel_sayi);
    printf("buyuk tamsayi degiskeninin degeri= %lld, buyuk tamsayi degiskeninin adresi= %u\n",buyuk_tamsayi, &buyuk_tamsayi);

    return 0;
}