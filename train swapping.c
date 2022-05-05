#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,m,k,count,i,j;
	int a[60];
	scanf("%d",&m);
	for(k=0;k<m;k++){
		scanf("%d",&n);
	    count=0;
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		if(a[j]>a[i])count++;
	}
		printf("Optimal train swapping takes %d swaps.",count);
	}
}
