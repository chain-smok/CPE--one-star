#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,s;
	scanf("%d",&n);
	while(n){
			while(n>9){
				s=0;
			while(n){
				s+=n%10;
				n/=10;
			}
			n=s;
		}
		printf("%d\n",n);
		scanf("%d",&n);
	}
	return 0;
}
