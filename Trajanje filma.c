#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    int H1;
    int M1;
    int S1;
    int H2;
    int M2;
    int S2;
    int H;
    int M;
    int S;

    printf("Unesi T\n");
    scanf("%d", &T);

    printf("Unesi H1\n");
    scanf("%d", &H1);
    printf("Unesi M1\n");
    scanf("%d", &M1);
    printf("Unesi S1\n");
    scanf("%d", &S1);

    printf("Unesi H2\n");
    scanf("%d", &H2);
    printf("Unesi M2\n");
    scanf("%d", &M2);
    printf("Unesi S2\n");
    scanf("%d", &S2);

    int trajanjeUSekundama=H2*3600+M2*60+S2-(H1*3600+M1*60+S1)-T*60;
    printf("Trajanje filma u sekundama: %d\n",trajanjeUSekundama);

    //trajanje u H:M:S

    H=trajanjeUSekundama/3600;
    M=(trajanjeUSekundama%3600)/60;
    S=trajanjeUSekundama%60;
    printf("H: %d\n", H);
    printf("M: %d\n", M);
    printf ("S: %d\n", S);
    printf("%d: %d :%d",H,M,S );





}
