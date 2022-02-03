#include <math.h>
#include <stdio.h>

int main(){

int duljina_zeca;
int a;
int b;
int vrijeme;
int skok;
int opseg;
int broj_skokova;

printf("Unesi a stranicu u metrima: ");
scanf("%d", &a);

printf("Unesi b stranicu u metrima: ");
scanf("%d", &b);

printf("Unesi duljinu zeca u metrima: ");
scanf("%d", &duljina_zeca);

skok=duljina_zeca*3;
opseg=2*a+2*b;
printf("Opseg polja je %d\n ", opseg);

broj_skokova=ceil(opseg/skok);

vrijeme=broj_skokova+(broj_skokova-1)*3;
printf("Zecu treba %d sekundi da predje opseg");

}
