#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char map[100][100];
int height,width;
int isSquare(int x,int y,int radius){
	int left,right,bottom,top,i,j;
	char ch=map[x][y];
	top=x-radius;
	bottom=x+radius;
	left=y-radius;
	right=y+radius;
	while(top<0||left<0||right>=width||bottom>=height)return 0;
	for(i=top;i<=bottom;i++)
	 for(j=left;j<=right;j++)
	  if(map[i][j]!=ch)
	  return 0;
	return 1;
}
int main() {
	int problem,p,n,i,t,x,y;
	int radius;
	scanf("%d",&problem); 
	for(p=1;p<=problem;p++){
		scanf("%d%d%d\n",&height,&width,&n);
		for(i=0;i<height;i++)gets(map[i]);
		printf("%d %d %d\n",height,width,n);
    for(t=1;t<=n;t++){
    	scanf("%d %d",&x,&y);
    	radius=0;
    	while(isSquare(x,y,radius))
    	 radius++;
    	printf("%d\n",2*radius-1); 	
}
	}
	return 0;
}
