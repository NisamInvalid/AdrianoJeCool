#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float stara_cijena;
    float nova_cijena;
    float postotak_snizenja;

    printf("Unesi staru cijenu: ");
    scanf("%f", &stara_cijena);
    printf("Unesi novu cijenu: ");
    scanf("%f", &nova_cijena);

    postotak_snizenja=(stara_cijena-nova_cijena)/stara_cijena*100;
    printf("\nCijena je snizena za %.0f %% \n", postotak_snizenja);




return 0;
}
