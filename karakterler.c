#include <stdio.h>

// int main(){
//     char karakter = 'k';    // Char ' tek tırnak ile tanımlanır %c ifadesi ile yazdırılır
//     printf("%c\n",karakter);

//     char karsilama_mesaji[] = "Merhaba dunya!"; // [] uzunluğu belirlenmemiş bir diziyi ifade eder. Karakter dizilerinde çift tırnak kullanılır.
//     printf("%s", karsilama_mesaji);             // string karakter dizisi0
//     return 0;
// }

int main(){
    char karsilama_mesaji1[] = "Merhaba!";      // Burada sonra bitiriş karakterini belirtmesek de orada vardır
    char karsilama_mesaji2[] = {'M','e','r','h','a','b','a','!','\0'};  // Sondaki bitiriş karakter
    
    printf("%lu", sizeof(karsilama_mesaji1));       // Bitiriş karakteriyle beraber 9 çıkacaktır
    printf("\n...\n");
    printf("%lu\n", sizeof(karsilama_mesaji2));     // Size of komutu türkçe karakter ile çok düzgün çalışmamakta. 
    
    return 0;
}