#include <stdio.h>
#include <math.h>

int main(void)
{

int broj;

printf("Unesi broj od 1 do 4: ");
scanf("%d", &broj);

if(broj==1)
    printf("Sljedeci boja na semaforu je žuta");

else if(broj==2)
    printf("Sljedece boja na semaforu je crvena");

else if (broj==3)
    printf("Sljedeca boja na semaforu je zuta");

else if(broj==4)
    printf("Sljedeca boja na semaforu je zelena");
}
