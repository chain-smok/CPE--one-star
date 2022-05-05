#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,j,n=0;
	char line[101][101];
	int length[101];
	int maxlen=0,upbound;
	
	while(gets(line[n])){
		length[n]=(int)strlen(line[n]);
	    if(length[n]>maxlen)maxlen=length[n];
		n++;		
	}
	for(j=0;j<maxlen;j++){
		upbound=0;
		while(j>=length[upbound])upbound++;
		for(i=n-1;i>=upbound;i--)
			if(j<length[i]) putchar(line[i][j]);
			else putchar(' ');
		printf("\n");	
	}
	return 0;
}
