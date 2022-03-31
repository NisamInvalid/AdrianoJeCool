#include<stdio.h>
#include<conio.h>

int main()
{
int odabir;
int sum=0;

printf("--------------------------------------\n");
printf("| 1. Musko sisanje kosta 100kn        |\n");
printf("| 2. Izbrijavanje kosta 40kn          |\n");
printf("| 3. Sredivanje brade kosta 50kn      |\n");
printf("| 4. Brijanje brade kosta 80kn        |\n");
printf("--------------------------------------\n");

printf("Unesi sto su covjeci odabrali: ");

while(odabir){

    scanf("%d", &odabir);
    sum+=odabir==1?100:odabir==2?40:odabir==3?50:odabir==4?80:0;
}
printf("%d",sum);

}
