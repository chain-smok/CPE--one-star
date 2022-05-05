#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    long long Hashmat,opponent;
    long long temp;
	while(scanf("%11d %11d",&Hashmat,&opponent)!=EOF){
		if(Hashmat>opponent){
		    temp=Hashmat;
		    Hashmat=opponent;
		    opponent=temp;
		} 
		    temp=opponent-Hashmat;
		    printf("%d",temp);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
