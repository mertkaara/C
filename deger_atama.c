#include <stdio.h>

// int main()
// {
//     int i =3;
//     printf("%d\n",i);

//     i +=5;      // i = i+5
//     printf("%d\n",i);

//     i -=5;      // i = i-5
//     printf("%d\n",i);

//     i *=3;      // i = i*3
//     printf("%d\n",i);

//     i /=3;      // i = i/3
//     printf("%d\n",i);

//     return 0;
// }

int main()
{
    int i;
    i = 0;
    printf("%d\n", i);
    printf("%d\n", i++);    // Önce mevcut değer yazılacak, sonra değer artırıkacak.
    printf("%d\n", i);
    printf("%d\n", ++i);    // Önce değer artırılacak, sonra yazdırma işlemi yapılacak.
    printf("%d\n", i);

    return 0;
}