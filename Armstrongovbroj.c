#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()

{
    	int n;
	int j, d, s;

	printf("Unesite troznamenkasti broj: ");
	scanf("%d", &n);

	if(n>=100 && n<=999){

		j=n%10;
		d=(n/10)%10;
		s=n/100;

		if(n==j*j*j + d*d*d + s*s*s){
			printf("Broj je Amstrongov!\n");
		}else{
			printf("Broj nije Amstrongov!\n");
		}


	}


	return 0;
}
