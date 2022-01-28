#include <math.h>
#include <stdio.h>

int main(){

int potrosnja_goriva;
int distanca_do_benzinske;
int kolicina_goriva_u_autu;

printf("Unesi potrosnju auta u KM/L: ");
scanf("%d", &potrosnja_goriva);

printf("Unesi distancu do benzinske postaje u KM: ");
scanf("%d", &distanca_do_benzinske);

printf("Unesi kolicinu goriva u autu u litrama: ");
scanf("%d", &kolicina_goriva_u_autu);

if(potrosnja_goriva*kolicina_goriva_u_autu>=distanca_do_benzinske)
    printf("Automobil ce stici do benzinske");
else
printf("Automobil nece stici do benzinske postaje");

}
