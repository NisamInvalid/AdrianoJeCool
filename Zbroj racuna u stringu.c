#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
char odabir[10];
int i;
int cemoDaNastavimo=1;
int sum=0;
float cijena=0;

printf("_________________________\n");
printf("| 1. Kava      | 120kn  |\n");
printf("| 2. Sladoled  | 1.5kn  |\n");
printf("| 3. Govno     | 25kn   |\n");
printf("| 4. Krofna    | 1500kn |\n");
printf("|_______________________|\n");

do{
printf("Odaberite sto zelite: \n");
scanf("%s",odabir);
for(int i=0; odabir[i]!='\0';i++)
    odabir[i]=tolower(odabir[i]);
    sum+=1;

if(!strcmp(odabir, "kava")|!strcmp(odabir, "1"))cijena+=120;
    else if(!strcmp(odabir, "sladoled")|!strcmp(odabir, "2"))cijena+=1.5;
    else if(!strcmp(odabir, "govno")|!strcmp(odabir, "3"))cijena+=25;
    else if(!strcmp(odabir, "krofna")|!strcmp(odabir, "4"))cijena+=1500;
else cemoDaNastavimo=0;
printf("Ukupna cijena je: %.2f kn\n", cijena);

}while(cemoDaNastavimo);

sum-=1;

printf("Ukupno racuna ima: %d\n", sum);






printf("Adriano je cool");



}
