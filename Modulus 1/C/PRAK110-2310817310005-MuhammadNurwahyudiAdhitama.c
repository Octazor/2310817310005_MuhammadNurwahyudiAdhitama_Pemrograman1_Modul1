#include <stdio.h>
#include <math.h>

int main()
{
    int alas = 5.0;
    int tinggi = 12.0;
    int sisi_miring = (alas*alas) + (tinggi*tinggi);
    int hasil_sisi_miring = sqrt(sisi_miring);
    int keliling_segitiga = alas + tinggi + hasil_sisi_miring;
    int luas = alas * tinggi /2;
    printf("diketahui : \n");
    printf("Alas = %dcm\n", alas);
    printf("Tinggi = %dcm\n\n", tinggi);
    printf("Jawab: \n");
    printf("Sisi A = %dcm\n", tinggi);
    printf("Sisi B = %dcm\n", hasil_sisi_miring);
    printf("Sisi C = %dcm\n", alas);
    printf("keliling = %dcm\n", keliling_segitiga);
    printf("Luas = %dcm\n", luas);
}