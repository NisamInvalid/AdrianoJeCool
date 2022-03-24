#include <stdio.h>
#include <math.h>

int main(void)
{

int broj;


do{
    printf("Unesi neki drugi broj: ");
    scanf("%d", &broj);
    if(broj <0) printf("Erorcina \n");
    if(broj==0) printf("0");
} while (broj<0);

for(int i=1; i<=broj;i++){
    for(int j=0; j<i; j++)
        printf("%d",i);
    printf("\n");
}


}

