#include <stdio.h>
// // getchar() sadece 1 tane karakter alır.
// // sayı girilse bile sayıyı karakter olarak alır sayısal değeri yoktur.
// int main()
// {
//     char ogrenci_notu;
//     printf("Ogrenci notunu giriniz:");

//     // getchar() komutu ile notu al ve ogrenci_notu değişkeninde sakla
//     ogrenci_notu = getchar();
//     // putchar() komutu ile notu çıktı olarak ver
//     putchar(ogrenci_notu);

//     return 0;
// }

/* Dikdörtgenin alanını ve çevresini hesaplayan c programı yazını*/

int main()
{
    float en,boy,alan,cevre;
    printf("Dikdortgenin en ve boy degerlerini cm cinsinden giriniz:");
    scanf("%f%f", &en,&boy);
    alan=(en*boy);
    cevre=2*(en+boy);
    printf("Dikdortgenin cevresi: %.2f cm\nDikdortgenin alani: %.2f cm^2",cevre,alan);
    return 0;
}
