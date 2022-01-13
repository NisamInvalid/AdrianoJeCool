#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float C;
    float K;
    scanf("%f", &F);

    C=(F-32)*9/5;
    K=C+273.15;

    printf("Temperatura u Celzijevim stupnjevima je %.2f\n", C);
    printf("Temperatura u Kelvinima stupnjevima je %.2f\n", K);



return 0;

}
