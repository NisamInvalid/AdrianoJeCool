#include <math.h>
#include <stdio.h>

int main(){

int broj;
int korijen_broja;
int kvadrat_broja;

printf("Unesi broj: ");
scanf("%d", &broj);

kvadrat_broja=broj*broj;
korijen_broja=sqrt(broj);


if(broj%2)
    printf("Kvadrat toga broja je: %d", kvadrat_broja);

else
    printf("Korijen toga broja je; %d", korijen_broja);
}
