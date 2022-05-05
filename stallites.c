#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	double s,a;
	char c[5];
	while(scanf("%lf%lf%s",&s,&a,c)!=EOF){
		if(strcmp(c,"min")==0)a/=60;
		if(a>180)a=360-a;
		double ang=a*M_PI/180.0;
		double arc=(6440.0+s)*ang;
		double chord=2.0*(6440.0+s)*sin(ang/2);
	printf("%.6lf %.6lf\n",arc,chord);	
	}
	return 0;
}
