#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){

char odabir[6];
int sum=0;
float rezultat=0;
int cemoDaNastavimo=1;
int cijena;

printf("Dobro dosli u Adrianov kalkulator, za izlazak stisnite 0\n");
printf("_________________________\n");
printf("|                       |\n");
printf("| 1 | 2 | 3 | mnozenje  |\n");
printf("| 4 | 5 | 6 | dijeljenje|\n");
printf("| 7 | 8 | 8 | zbrajanje |\n");
printf("|   | 0 |   | oduzimanje|\n");
printf("|_______________________|\n");

do{
printf("Odaberite koji broj zelite: ");
scanf("%s", odabir);
for(int i=0; odabir[i]!='\0';i++)
    odabir[i]=tolower(odabir[i]);

if(!strcmp(odabir, "jedan")|!strcmp(odabir, "1"));
    else if(!strcmp(odabir, "dva")|!strcmp(odabir, "2"));
    else if(!strcmp(odabir, "tri")|!strcmp(odabir, "3"));
    else if(!strcmp(odabir, "cetiri")|!strcmp(odabir, "4"));
    else if(!strcmp(odabir, "pet")|!strcmp(odabir, "5"));
    else if(!strcmp(odabir, "sest")|!strcmp(odabir, "6"));
    else if(!strcmp(odabir, "sedam")|!strcmp(odabir, "7"));
    else if(!strcmp(odabir, "osam")|!strcmp(odabir, "8"));
    else if(!strcmp(odabir, "devet")|!strcmp(odabir, "9"));
    else if(!strcmp(odabir, "nula")|!strcmp(odabir, "0"));
    else if(!strcmp(odabir, "mnoziti")|!strcmp(odabir, "*"));
    else if(!strcmp(odabir, "dijeliti")|!strcmp(odabir, "/"));
    else if(!strcmp(odabir, "zbrajati")|!strcmp(odabir, "+"));
    else if(!strcmp(odabir, "oduzimati")|!strcmp(odabir, "-"));
    else cemoDaNastavimo=0;
}while(cemoDaNastavimo);

printf("Sto zelite raditi s tim brojem? ");


}
