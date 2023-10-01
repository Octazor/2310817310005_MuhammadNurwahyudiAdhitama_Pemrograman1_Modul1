#include <stdio.h>

int main() {
  
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    
    printf("Variabel a adalah %d\n", a);
    printf("Variabel b adalah %d\n", b);
    printf("Variabel x adalah %d\n", x);
    printf("Variabel y adalah %d\n", y);

    float hasil = (float)(a + b) * x / y;

    printf("Hasil dari a dikali b dibagi c adalah: %.2f\n", hasil);

    return 0;
}
