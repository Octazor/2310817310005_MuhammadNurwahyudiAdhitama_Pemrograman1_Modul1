#include <stdio.h>

int main()
{
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int keliling = sisi1 + sisi2 +sisi3;
    int pagar = 85000;
    int total = keliling*pagar;
    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", pagar);
    printf("Jawaban: \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", total);

}