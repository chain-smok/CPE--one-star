#include <stdio.h>
#include <stdlib.h>
int bin2dec(){
	int n,i;
	char s[32];
	scanf("%s",s);
	for(i=0,n=0;s[i]!='\0';i++){
		n=n*2+(s[i]-'0');
	}
	return n;
}

int main() {
    int n,x,y,z,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
    	x=bin2dec();
    	y=bin2dec();
       while(y>0){
       	z=x%y;
       	x=y;
       	y=z;
	   }    	
    if(y>0){
      z=x%y;
      x=y;
      y=z;
	}
    if(x>1)printf("Pair #%d: All you need is love!\n",i);	
    else printf("Pair #%d: Love is not all you need!\n",i);
	}
	return 0;
}
