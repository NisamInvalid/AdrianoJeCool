#include <math.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Unesi x\n");
    scanf("%d", &x);

    printf("Adriano je jako cool\n");
    int sumOfsumOf= x%10+(x/10)%10+(x/100)%10+(x/1000)%10+(x/10000)%10+(x/100000)%10;
    printf("%d",sumOfsumOf);

}
