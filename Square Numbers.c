#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,b;
	int y,x;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)break;
		y=floor(sqrt(b+0.1));
		x=ceil(sqrt(a-0.1));
		printf("%d\n",y-x+1);
	}
	return 0;
}
