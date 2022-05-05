#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000000
int x[MAXSIZE];

int comp(const void*a,const void*b){
	   return (*(int*)a)-(*(int*)b);
}
void find_median(int *x,int n){
	int possible,count=0,i,min,max;
	qsort(x,n,sizeof(int),comp);
	if(n%2==1)min=max=x[n/2];
	else {
		min=x[n/2-1],max=x[n/2];
	}
	for(i=0;i<n;i++){
		if(x[i]>=min&&x[i]<=max)count++;
	}
	possible=max-min+1;
	printf("%d %d %d\n",min,count,possible);
}
int main() {
	int n,i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
		 scanf("%d",&x[i]);
	    find_median(x,n);	
	}
	return 0;
}
