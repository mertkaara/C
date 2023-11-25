#include <stdio.h>

int main() {
    char metin1[] = "Merhaba\nDunya!";  // \n newline yani bir satır atlar
    printf("%s", metin1);
    printf("\n.....\n");

    char metin2[] = "Merhaba\tDunya!";  // \t tab taba basılmış gibi olur
    printf("%s", metin2);
    printf("\n.....\n");

    char metin3[] = {'M','e','r','h','a','b','a','\0'}; // \0 Bitiriş, sonlandırma manasında kullanılır.
    printf("%s", metin3);
    printf("\n.....\n");

    char metin4[] = "Ogretmen iceri girince \"Gunaydin\" diye seslendi.";   //Stringi bitirmemek için \ kaçış ifadesi ile " kullanılır.
    printf("%s", metin4);
    printf("\n.....\n");

    return 0;
}