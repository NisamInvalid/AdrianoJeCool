#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float d;
    float o;
    float r;
    float broj_okretaja;

    printf("Unesi promjer kotaca: ");
    scanf("%f", &d);

    r=d/2;
    o=2*r*3.1356;

    broj_okretaja=400000/o;
    printf("Broj okretaja je %.0f\n", broj_okretaja );


}

