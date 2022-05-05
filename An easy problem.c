#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	int i,d,max=1,sum,r;
	char s[100001];
	while(scanf("%s",&s)!=EOF){
		max=1;
		sum=0;
		d=0;
		for(i=0;s[i]!=0;i++){
		if(s[i]>='0'&&s[i]<='9')d=s[i]-'0';
		if(s[i]>='A'&&s[i]<='Z')d=s[i]-'A'+10;
		if(s[i]>='a'&&s[i]<='z')d=s[i]-'z'+36;
		sum+=d;
		if(d>max)max=d;
		}
		for(r=max+1;r<=62;r++)if(sum%(r-1)==0)break;
		if(r<=62)printf("%d",r);
		else printf("such number is impossible.");
	}
	return 0;
}
