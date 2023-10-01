#include <stdio.h>

int main() {
  
    int a = 4;
    int b = 8;
    int c = 3;
    
    printf("Variabel a adalah %d\n", a);
    printf("Variabel b adalah %d\n", b);
    printf("Variabel c adalah %d\n", c);

    float hasil = (float)(a * b) / c;

    printf("Hasil dari a dikali b dibagi c adalah: %f\n", hasil);

    return 0;
}
