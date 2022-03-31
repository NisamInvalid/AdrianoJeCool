#include<stdio.h>
#include<conio.h>

int main()
{
	 int minimum=100, maximum=1000,najveci, jeLiDjeljivSBiloKojim, count=0, i, j;

	 for(i=minimum; i<=maximum; i++){
		  jeLiDjeljivSBiloKojim = 0;
		  for(j=2; j <= i/2; j++){
			   if(i%j==0){
				    jeLiDjeljivSBiloKojim=1;
				    break;}

}
		  if(jeLiDjeljivSBiloKojim==0 && i>=2){
		      najveci=i;
                count++;}
}
	 printf("\n Prime Count = %d\n Naj je veci %d", count,najveci);
	 return(0);
}
