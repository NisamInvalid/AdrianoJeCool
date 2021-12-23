#include <stdio.h>
#include <math.h>

int main()
{
    int F1;
    int F2;
    printf("Unesi F1\n");
    scanf("%d",&F1);
    printf("Unesi F2\n");
    scanf("%d",&F2);

    printf("Sile u istom smjeru: %d\n", F1+F2);
    printf("Sile u suprotnom smjeru: %d\n", F1-F2);
    printf("Sile okomite jedne na drugu: %.2f\n", sqrt(F1*F1+F2*F2));

}
