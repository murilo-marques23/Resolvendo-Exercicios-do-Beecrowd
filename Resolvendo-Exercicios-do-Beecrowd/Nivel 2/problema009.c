#include <stdio.h>
 
int main() {
    char nome[10];
    double salario_fixo, total_venda_mes, Total;
    
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_venda_mes);
    Total = salario_fixo + (total_venda_mes * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", Total);
 
    return 0;
}