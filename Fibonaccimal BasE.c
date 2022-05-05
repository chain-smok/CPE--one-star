#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,i,m,disp0;
	int f[40];
	f[0]=1;
	f[1]=2;
	for(i=2;i<39;i++)f[i]=f[i-1]+f[i-2];
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		if(n==0)printf("0 = (fib)\n");
		else {
		disp0=0;
		printf("%d = ",n);
		for(i=38;i>=0;i--){
			if(n>=f[i]){
              putchar('1');
			  n-=f[i];			
              disp0=1;}			
			else 
	           if(disp0==1)		
			    putchar('0');}
		printf(" (fib)\n");
		}	
	}
	return 0;
}
