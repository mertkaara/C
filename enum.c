// enumerated type , numaralandırılmış tipler
#include <stdio.h>

enum Seviyeler {
    DUSUK = 14,     //Tanımladığımız değişkenler değer atanmadığı taktirde 0 dan başlar 1 2 diye devam eder.
    ORTA = 19,      // Düşüğe 12 dedikten sonra diğerlerine değer atamasaydık orta=13 , yüksek=14 diye devam eder.
    YUKSEK = 25
};

int main() {
    //numaralandırılmış tipte bir değişken tanımla ve değer ata
    enum Seviyeler OdaSicakligi = DUSUK;

    printf("%d",OdaSicakligi);

    return 0;
}