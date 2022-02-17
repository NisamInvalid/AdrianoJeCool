#include <stdio.h>
#include <math.h>

int main()
{
int broj;

printf("Unesi broj od 1 do 4: ");
scanf("%d", &broj);

switch(broj){
    case 1:
        printf("Sljedeca boja na semaforu je zuta");
        break;
    case 2:
        printf("Sljedeca boja na semaforu je zelena");
        break;
    case 3:
        printf("Sljedeca boja na semaforu je zuta");
        break;
    case 4:
        printf("Sljedeca boja na semaforu je crvena");
        break;
    default:
        printf("Glupane uzeo si broj veci od 4");
        break;
}
}
