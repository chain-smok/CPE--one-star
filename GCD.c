#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b){
	if(a==0)return b;
	else return GCD(b%a,a);
}
int main() {
  int n,sum,i,j;
  scanf("%d",&n);	
  while(n){
  	sum=0;
  	for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
    {
    sum+=GCD(i,j);
    }
    printf("%d\n",sum);
    scanf("%d",&n);
  }	
	return 0;
}
