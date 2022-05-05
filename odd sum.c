#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a,b;
	int n,c=0;
	int k,sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(a%2==1)k=a;
		else k=a+1;
		for(sum=0;k<=b;k+=2){
			sum+=k;
		}
		printf("Case %d: %d\n",++c,sum);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
