#include <stdio.h>
#include <string.h>

int main(){
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("ingiliz strlen: %d", strlen(ingiliz_alfabesi));
    printf("\n...\n");
    printf("ingiliz sizeof: %d", sizeof(ingiliz_alfabesi));
    printf("\n......\n");

    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
    printf("turk strlen: %d", strlen(turk_alfabesi));   // Türkçe karakterler çift karakter olarak sayılıyor.
    printf("\n...\n");
    printf("turk sizeof: %d", sizeof(turk_alfabesi));   // En sonra \0 ifadesini de sayıyor.
    printf("\n......\n");

    char deneme[50] = "ABCDEFGHIJKLMOPQRSTUVWXYZ";
    printf("deneme strlen: %d", strlen(deneme));        // strlen anlamlı karakterlerin uzunluğunu verir.
    printf("\n...\n");
    printf("deneme sizeof: %d", sizeof(deneme));        // sizeof hafızada bu deneme değişkenini tutmak için açılan yer miktarını gösteriyor.

    return 0;
}