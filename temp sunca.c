#include <math.h>
#include <stdio.h>

int main(){

int temp_sunca;
int temp_objekta;

printf("Unesi temperaturu sunca: ");
scanf("%d", &temp_sunca);

printf("Unesi temperaturu objekta: ");
scanf("%d", &temp_objekta);

if(temp_objekta*temp_objekta>temp_sunca)
    printf("TEMPERATURA JE VEÆA OD SUNCA!!!");
else
printf("Nije bas tako puno vruce");

}
