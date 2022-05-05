#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,ii,jj,n,c,k,max=0;
	while (scanf("%d %d",&ii,&jj)!=EOF){
	if(ii>jj)
	  {i=jj;j=ii;}
	else {j=jj;i=ii;}
	for(k=i;k<=j;k++){
		n=k;c=0;
	while(n!=1){
      c++;
	    if(n%2==1)
		  n=3*n+1;
		else n/=2;
	}
	c++;
	if(c>max)max=c;	
	}
	printf("%d %d %d\n",ii,jj,max);
}
	return 0;
}
