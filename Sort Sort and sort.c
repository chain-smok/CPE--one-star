#include <stdio.h>
#include <stdlib.h>
int values[10002];
int M;
int compare(const void *a,const void *b){
	int A=*(int*)a;
	int B=*(int*)b;
	if(A%M>B%M)return 1;
	if(A%M<B%M)return-1;
	//钡ㄓA%M==B%M,计┪案计 
	if(A%2==1&&B%2==0)return-1;
	if(A%2==0&&B%2==1)return 1;
	//钡ㄓボ常琌计┪案计 
    if(A%2==1&&B%2==1&&A>B)return-1;
    if(A%2==1&&B%2==1&&A<B)return 1;
    if(A%2==0&&B%2==0&&A>B)return 1;
    if(A%2==0&&B%2==0&&A<B)return-1;
}
int main() {
	int m,n;
	while(scanf("%d %d",&n,&m)==2){
		if(n==0&&m==0){printf("0 0");break;};
		for(int i=0;i<n;i++){
			scanf("%d",&values[i]);
		}
		M=m;
		qsort(values,n,sizeof(int),compare);
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++){
		printf("%d\n",values[i]);}
		}
	return 0;
}
