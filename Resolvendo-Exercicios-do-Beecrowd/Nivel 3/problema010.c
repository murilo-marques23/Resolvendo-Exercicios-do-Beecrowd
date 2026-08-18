#include <stdio.h>
 
int main() {
    int id, n;
    double valor_u, aux, Total;
    
    scanf("%d, %d, %lf", &id, &n, &valor_u);
    aux = (n * valor_u);
    scanf("%d, %d, %lf", &id, &n, &valor_u);
    Total = aux + (n * valor_u);
    
    printf("VALOR A PAGAR: R$ %.2lf", Total);
 
    return 0;
}