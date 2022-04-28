#include <stdio.h>
#include <math.h>

int main(void)
{
int broj_zadataka;
int zad_1, zad_2, zad_3, zad_4, zad_5;
int zad_zad;
int josipovo_znanje,bodovi=0;

printf("Koliko ima ukupno zadataka: ");
scanf("%d", &broj_zadataka);

printf("Koliko Josip zna zadataka: ");
scanf("%d", &josipovo_znanje);

printf("Koji su zadaci bili odabrani? ");
scanf("%d %d %d %d %d", &zad_1, &zad_2, &zad_3, &zad_4, &zad_5);

while(josipovo_znanje){
scanf("%d", &zad_zad);
josipovo_znanje--;
    if(zad_zad==zad_1||zad_zad==zad_2||zad_zad==zad_3||zad_zad==zad_4||zad_zad==zad_5) bodovi++;
}
int ocjena=bodovi==0?1:bodovi;

printf("Ocjena je %d",ocjena);
}
