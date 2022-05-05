#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int m,n,i,j,k,p,f=0;
	char d[102][102],c[102][102];
	while(scanf("%d%d",&m,&n)!=EOF){
		scanf("\n");
		if(m==0&&n==0)exit(0);
		memset(c,0,sizeof(c));
		for(i=1;i<=m;i++){
			gets(&d[i][1]);
		}
		for(i=1;i<=m;i++)
		 for(j=1;j<=n;j++)
		if(d[i][j]=='*'){
			for(k=i-1;k<=i+1;k++)
			 for(p=j-1;p<=j+1;p++)
			c[k][p]++;
		}
		f++;
		if(f>1)printf("\n");
		printf("Field #%d:\n",f);
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++)
			if(d[i][j]=='*')printf("*");
			else printf("%d",c[i][j]);
			printf("\n");
		}
	}	
	return 0;
}
