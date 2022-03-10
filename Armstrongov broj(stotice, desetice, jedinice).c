#include <stdio.h>
#include <math.h>

int main(void)
{
int broj;
int stotice;
int desetice;
int jedinice;

printf("Unesi broj: ");
scanf("%d", &broj);

stotice=broj/100;
desetice=broj/10-10*stotice;
jedinice=broj%10;

if(broj==pow(stotice, 3)+ pow(desetice, 3)+ pow(jedinice, 3))
    printf("To je Armstrongov broj");
else
    printf("Nije Armstrongov broj");
}








