#include <math.h>
#include <stdio.h>

int main(){
    int godina;
    int stoljece;

printf("Unesi godinu: ");
scanf("%d", &godina);

stoljece=(godina/100) + ((godina%100==0) ? 0 : 1);

printf("Ovo je %d stoljece", stoljece);



}
