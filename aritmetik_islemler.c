#include <stdio.h>

int main()
{
    int sayi1,sayi2;
    int toplam, fark, carpim, mod;
    float bolum;
    /*
     * Kullanıcıdan iki sayı al.
     */
    printf("Lütfen iki sayı giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);      // & adres manasında kullanılmıştır, neyi al ve nereye yaz.
    /*
     * Tüm aritmetik işlemleri gerçekleştir.
     */
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = (float)sayi1 / sayi2;       // İki değişken de int olduğu için c tamsayı bölmesi yapar bu yüzden değişken değişimi (type cast) yapıp floata çeviriyoruz.
    mod = sayi1 % sayi2;
    // Sonuçları yazdır.
    printf("Toplam = %d", toplam);
    printf("\nFark = %d", fark);
    printf("\nÇarpım = %d", carpim);
    printf("\nBolüm = %.8f", bolum);      // %.2f dersek virgülden sonra 2 basamak yazdırır.
    printf("\nKalan veya modu = %d",mod);

    return 0;
}