#include <stdio.h>
#include <math.h>

int main(void)
{
int sto_zelite;
int prvi_broj;
int drugi_broj;
float izvolite;

printf(" --------------------------------\n");
printf("|\t 1. Zbrajanje \t\t|  \n");
printf("|\t 2. Oduzimanje \t\t| \n");
printf("|\t 3. Mnozenje  \t\t| \n");
printf("|\t 4. Dijeljenje\t\t| \n");
printf("|\t 5. Cjlbr. dijeljenje\t|\n");
printf("--------------------------------- \n");

printf("Izaberite sto zelite: ");
scanf("%d", &sto_zelite);

printf("Izaberite prvi broj: ");
scanf("%d", &prvi_broj);

printf("Izaberite drugi broj: ");
scanf("%d", &drugi_broj);

switch(sto_zelite){
case 1:
    izvolite=prvi_broj+drugi_broj;
    printf("%.0f", izvolite);
    break;

case 2:
    izvolite=prvi_broj-drugi_broj;
    printf("%.0f", izvolite);
    break;
case 3:
    izvolite=prvi_broj*drugi_broj;
    printf("%.0f", izvolite);
    break;
case 4:
    izvolite=(float)prvi_broj/drugi_broj;
    printf("%.2f", izvolite);
    break;
case 5:
    izvolite=prvi_broj%drugi_broj;
    printf("%.0f", izvolite);
    break;
default:
    printf("To nije opcija");
    break;
}
}








