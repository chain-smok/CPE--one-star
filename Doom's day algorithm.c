#include <stdio.h>
#include <stdlib.h>
int base=5;//1月1日為星期六 
char *weekday[]={"Sunday","Monday","Tuesday","Wedneday","Thursday","Friday","Saturday"};
int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
	int i,j,n,M,D;
	int total;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&M,&D);
		total=0;
		for(j=1;j<M;j++)
			total+=monthday[j];
		total+=D;
		printf("%s\n",weekday[(total+base)%7]);
}	
	return 0;
}
