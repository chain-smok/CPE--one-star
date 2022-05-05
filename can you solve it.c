#include <stdio.h>
#include <stdlib.h>
int loc(int x,int y){
	return (x+y+1)*(x+y)/2+x;
}

int main() {
	int x1,y1,x2,y2;
	int t,n;
	scanf("%d",&n);
	for(t=1;t<=n;t++){
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("Case %d: %d\n",t,loc(x2,y2)-loc(x1,y1));
}	
	return 0;
}
