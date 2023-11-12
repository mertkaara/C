#include <stdio.h>

int main(){
    char karakter = 'k';    // Char ' tek tırnak ile tanımlanır %c ifadesi ile yazdırılır
    printf("%c\n",karakter);

    char karsilama_mesaji[] = "Merhaba dunya!"; // [] uzunluğu belirlenmemiş bir diziyi ifade eder.
    printf("%s", karsilama_mesaji);             // string karakter dizisi0
    return 0;
}