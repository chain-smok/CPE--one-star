#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main() {
	int m,i,j;
	int n;
	int c=0;
	long long a[10000];
	scanf("%d\n",&m);
	for(c=1;c<=m;c++){
		scanf(" N = %d",&n);
		for(i=0;i<n*n;i++)
		 scanf("%lld",&a[i]);
		i=0;j=n*n-1;
		while(i<=j){
			if(a[i]!=a[j])break;
			if(a[i]<0)break;
			i++;j--;
		}
		if(i>j)printf("Test #%d: Symmetric.\n",c);
		else printf("Test #%d: Non-symmetric.\n",c);
	}
	return 0;
}
