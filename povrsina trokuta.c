#include <math.h>
#include <stdio.h>

int main(){

float povrsina;
float S;
float a;
float b;
float c;
float ax;
float bx;
float cx;
float ay;
float by;
float cy;

printf("Unesi AX koordinatu u cm: ");
scanf("%f", &ax);

printf("Unesi AY koordinatu u cm: ");
scanf("%f", &ay);

printf("Unesi BX koordinatu u cm: ");
scanf("%f", &bx);

printf("Unesi BY koordinatu u cm: ");
scanf("%f", &by);

printf("Unesi CX koordinatu u cm: ");
scanf("%f", &cx);

printf("Unesi CY koordinatu u cm: ");
scanf("%f", &cy);

a=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
b=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
c=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));

S=(a+b+c)/2;

povrsina=sqrt(S*(S-a)*(S-b)*(S-c));

printf("Povrsina trokuta je %.2f cm na kvadrat", povrsina);
}
