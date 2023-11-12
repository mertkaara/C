#include <stdio.h>
int main() {
    int x=5, y=6, z=50;     // Tek satırda bütün değişkenlere değer atanabilir.
    printf("%d", x+y+z);    // Tırnaktan sonra bir nevi biçimlendirme işareti, d iste tamsayı değeri ifade ediyor.
    printf("\n...\n");      // \n newline

    x=y=z=50;
    printf("%d", x+y+z);
    return 0;
}
