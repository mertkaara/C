#include <stdio.h>
#include <string.h>

// structlar Pythondaki class'a benzeyen bir yapı

struct PersonelBilgisi  {
    int Yas;
    float Maas;
    char Isim[30];
    char Cinsiyet[6];
};

int main() {
    // PersonelBilgisi yapısında, Personel1 isimli bir değişken tanımla
    struct PersonelBilgisi Personel1;

    // Personel1'in alanlarına değer ata
    // personel1.isim = "Ahmet ahmetoğlu" böyle yazarsak hata alırız char'a doğrudan değişken atayamıyoruz
    strcpy(Personel1.Isim, "Ahmet Ahmetoglu");
    strcpy(Personel1.Cinsiyet,"Erkek");
    Personel1.Yas = 34;
    Personel1.Maas = 8500;

    // Personel1 struct'ının değerlerini yazdır
    printf("Personelin adi: %s\n",Personel1.Isim);
    printf("Personelin cinsiyeti: %s\n",Personel1.Cinsiyet);
    printf("Personelin yasi: %d\n",Personel1.Yas);
    printf("Personelin maasi: %lf\n",Personel1.Maas);

    printf("\n..................................\n");

    // Alternatif bir personel tanimlama:
    struct PersonelBilgisi Personel2 = {33,5500,"Ayse Ayseoglu","Kadin"};
    printf("Personelin adi: %s\n",Personel2.Isim);
    printf("Personelin cinsiyeti: %s\n",Personel2.Cinsiyet);
    printf("Personelin yasi: %d\n",Personel2.Yas);
    printf("Personelin maasi: %lf\n",Personel2.Maas);

    printf("\n..................................\n");

    // Oluşturduğumuz bir örneği doğrudan tanımladığımız başka bir örneğe eşitleyebiliyoruz.
    struct PersonelBilgisi Personel2Kopyasi;
    Personel2Kopyasi = Personel2;
    printf("Personelin adi: %s\n",Personel2Kopyasi.Isim);
    printf("Personelin cinsiyeti: %s\n",Personel2Kopyasi.Cinsiyet);
    printf("Personelin yasi: %d\n",Personel2Kopyasi.Yas);
    printf("Personelin maasi: %lf\n",Personel2Kopyasi.Maas);

    return 0;
}