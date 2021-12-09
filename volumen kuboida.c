#include <stdio.h>

void main(){
    int stranicaA=80;
    int stranicaB=50;
    int stranicaC=75;
    printf("Unes stranice:\n");
    scanf("%d %d %d",&stranicaA,&stranicaB,&stranicaC);
    int V=stranicaA*stranicaB*stranicaC;
    printf("Volumen je %d cm^3",V);
}
