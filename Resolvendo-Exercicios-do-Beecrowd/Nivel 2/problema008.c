#include <stdio.h>
 
int main() {
    int id, horas;
    float valor_horas, salario;
    
    scanf("%d", &id);
    scanf("%d", &horas);
    scanf("%f", &valor_horas);
    salario = horas * valor_horas;
    
    printf("NUMBER = %d\n", id);
    printf("SALARY + U$ %.2f\n", salario);
 
    return 0;
}