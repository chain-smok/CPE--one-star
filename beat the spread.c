#include <stdio.h>
#include <stdlib.h>


int main() {
	int s,d;
	int n;
	scanf("%d",&n);
	while(n--){
	   scanf("%d%d",&s,&d);
	   if(s<d||s<0||d<0||(s+d)%2==1)printf("impossible\n");
	   else printf("%d %d",(s+d)/2,(s-d)/2);
}
	return 0;
}
