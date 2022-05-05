#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a,t,e,w,n,s,up,down;
	char rotate[10];
	while(scanf("%d\n",&a)&&a){
	up=1;n=2;w=3;down=6;s=5;e=4;
	 while(a--){
	 	gets(rotate);
	 	if(strcmp(rotate,"north")==0){
	 	t=up;up=s;s=down,down=n;n=t;}
		else if(strcmp(rotate,"south")==0){
		t=up;up=n;n=down;down=s;s=t;}
		else if(strcmp(rotate,"west")==0){
		t=up;up=e;e=down;down=w;w=t;} 
		else if(strcmp(rotate,"east")==0){ 
		t=up;up=w;w=down;down=e;e=t;} 
	 }
	  printf("%d\n",up);
	}
	return 0;
}
