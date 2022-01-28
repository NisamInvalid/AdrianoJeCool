#include <math.h>
#include <stdio.h>

int main(){

int visina_objekta;
int vertikalna_granica;

printf("Unesi visinu objekta u cm: ");
scanf("%d", &visina_objekta);

printf("Unesi visinu u metrima: ");
scanf("%d", &vertikalna_granica);

if(visina_objekta*10^-2<=vertikalna_granica)
    printf("Objekt ce stati unutar granica");
else
printf("Objekt nece stati unutar granica");

}
