#include <stdio.h>
#include <math.h>

int main(void)
{

int broj;
int sum=0;

for(int i=10; i>0;i--){
        printf("Unesi neki broj: ");
        scanf("%d", &broj);
        sum+=broj;
        i--;
}
printf("Ukupni broj bodova sto je hrvatska imala je %d \n", broj);
printf("Prosjek bodova sto je hrvatska imala je %f", (float)sum/10);
}
