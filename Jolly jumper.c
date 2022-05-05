#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,i;
	int x[3001];
	int check[3001]={};
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		for(i=1;i<n;i++){
			check[abs(x[i-1]-x[i])]=1;
		}
		for(i=1;i<n;i++){
			if(check[i]==0)break;
		}
		if(i==n)printf("Jolly\n");
		else printf("no jolly\n");	
	}
	return 0;
}
