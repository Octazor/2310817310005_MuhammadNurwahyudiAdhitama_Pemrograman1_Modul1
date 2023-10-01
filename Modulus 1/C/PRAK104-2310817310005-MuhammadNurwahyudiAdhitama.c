#include <stdio.h>

int main()
{
    int a = 400000;
    int b = 350000;
    int diskona = 13;
    int diskonb = 21;
    int hasila = a * diskona/100;
    int hasilb = b * diskonb/100;

    printf("Harga sepatu A adalah %d \n", a);
    printf("Harga sepatu B adalah %d \n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", a - hasila);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d \n", b - hasilb);

}