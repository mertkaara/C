#include <stdio.h>
#include <math.h>

int main()
{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    // Basit faiz hesabı ile faiz miktarının hesaplanması
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) /100;

    // Basit faiz hesabının sonucunun yazdırılması
    printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f",basit_faiz_miktari);

    // Bileşik faiz hesabı ile faiz miktarının hesaplanması
    bilesik_faiz_miktari = ana_para * (pow((1+faiz_orani/100),zaman));

    // Bileşik faiz hesabının sonucunun yazdırılması
    printf("\nBilesik faiz hesabi ile hesaplanan faiz miktari = %f",bilesik_faiz_miktari);
    
    return 0;
}