#include <stdio.h>
#include <math.h>

int main(void)
{

int broj;
int suma;

printf("Unesi broj: ");
scanf("%d", &broj);

while (broj){
     suma+=broj%10;
     broj/=10;
}
 printf("Zbroj znamenaka je: %d \n", suma);
}
