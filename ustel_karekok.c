#include <stdio.h>
#include <math.h>

// int main()
// {
//     double taban, kuvvet, sonuc;
//     printf("Taban degerini giriniz:");
//     scanf("%lf", &taban);               // % : Format belirleyici, lf : long float
//     printf("Kuvvet degerini giriniz:");
//     scanf("%lf", &kuvvet);

//     sonuc = pow(taban,kuvvet);
//     printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
//     return 0;
// }

int main()
{
    double sayi, karekok;
    printf("Karekoku hesaplanacak sayiyi giriniz:");
    scanf("%lf", &sayi);
    karekok = sqrt(sayi);
    printf("%.2lf sayisinin karekoku = %.2lf ", sayi,karekok);
    return 0;
}