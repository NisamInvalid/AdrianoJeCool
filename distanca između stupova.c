#include <stdio.h>
#include <math.h>

int main(){

int br_stupova;
int distanca;
int sirina_stupova;
int ukupna_distanca;

printf("Unesi broj stupova: ");
scanf("%d", &br_stupova);

printf("Unesi distancu izmedu stupova u metrima: ");
scanf("%d", &distanca);

printf("Unesi sirinu stupova u cm: ");
scanf("%d", &sirina_stupova);

ukupna_distanca=br_stupova*sirina_stupova+distanca*100;
printf("Ukupna distanca od prvog do zadnjeg stupa je: %d metara", ukupna_distanca);


}
