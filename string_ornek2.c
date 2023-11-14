#include <stdio.h>
#include <string.h>

int main()
{
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dunya!";
    char metin3[20];
    
    // metin2'yi metin1'in ucuna ekle(sonuç metin1'de depolanır)
    strcat(metin1, metin2);

    printf("%s",metin1);
    printf("\n...\n");

    // metin1 içeriğini metin3'e kopyala
    strcpy(metin3,metin1);

    printf("%s",metin3);
    printf("\n...\n");

    // strcmp iki stryi birbiriyle kıyaslar uzunluk farkını sayı olarak döndürür.
    printf("%d", strcmp(metin1, metin3));
    printf("\n...\n");
    printf("%d", strcmp(metin1, metin2));
    printf("\n...\n");
    printf("%d", strcmp(metin2, metin1));

    return 0;
}