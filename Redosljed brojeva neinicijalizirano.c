#include <stdio.h>
#include <math.h>

int main(void){

int x[4];
int temp;
int b;

for(int i=0;i<4;i++){
    printf("Unesi broj: ");
    scanf("%d", &x[i]);
}
do
{
b=0;
for(int i=0;i<4-1;i++){
    if(x[i]>x[i+1]){
        b=1;
    temp=x[i];
    x[i]=x[i+1];
    x[i+1]=temp;}
}
}while(b);
printf("\n");

for(int i=0;i<4;i++){
    printf("%d\n", x[i]);
}
}
