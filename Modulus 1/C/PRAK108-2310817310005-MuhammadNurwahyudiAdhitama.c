#include <stdio.h>

int main()
{
    float jarak = 14.0;
    int putaran = 5;
    float keliling = jarak / putaran;
    float phi = 3.14;
    float jarijari = keliling / (2*phi);

    printf("Diektahui : ");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %0.f Kilometer\n\n", jarak);
    printf("jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijari);

}