#include <stdio.h>
#include <math.h>
#define n 3.14159
int main() {
    double raio, A;
    raio = 0;
    A = 0;

    scanf("%lf", &raio);
    A = n * pow(raio,2);
 
    printf("A=%.4f\n", A);
    
    return 0;
}