#include <stdio.h>
#include <math.h>

int main(void)
{

int broj, faktorijel=1;


do{
    printf("Unesi neki broj: ");
    scanf("%d", &broj);
    if(broj <0) printf("Error \n");
} while (broj<0);

int b=broj;

while(broj)
    faktorijel*=broj--;

printf("%d faktorijala je broj %d", b, faktorijel);

}

