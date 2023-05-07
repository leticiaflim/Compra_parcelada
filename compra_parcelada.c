// valor de uma compra, parcelada em 10x

#include <stdio.h>

int main()
{
    float vl, vltotal;

    printf("Digite o valor da compra: ");
    scanf("%f", &vl);

    vltotal = vl / 10;

    printf("A parcela é de: %.2f", vltotal);
}