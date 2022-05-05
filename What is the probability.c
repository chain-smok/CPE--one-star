#include <stdio.h>
#include <stdlib.h>


int main() {
  int n,k,m;
  double p,q,s;	
  scanf("%d",&n);
  while(n--){
  	scanf("%d%lf%d",&m,&p,&k);
  	q=1-p;
  	if(p==0)s=0.0;
  	s=pow(q,(double)k-1)*p/(1-pow((double)q,m));
    printf("%.4lf",s);
   }
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
