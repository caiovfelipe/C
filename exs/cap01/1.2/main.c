
#include <stdio.h>
int main(){
    float total, comissao;
    total = 100;
    comissao = total*0.10;
    printf("O vendedor vendeu R$%.1f, portanto, sua comissão será de R$%.1f.\n", total, comissao);
    return 0;
}