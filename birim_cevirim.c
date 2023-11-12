#include <stdio.h>

int main()
{
    float cm, metre, km;
    // Uzunluğu cm cinsinden al.
    printf("Uzunluğu cm cinsinden giriniz: ");
    scanf("%f", &cm);

    metre = cm/100.0;
    km = cm/100000.0;

    printf("Metre cinsinden uzunluk = %.3f m \n", metre);
    printf("Kilometre cinsinden uzunluk = %.5f km", km);

    return 0;
}