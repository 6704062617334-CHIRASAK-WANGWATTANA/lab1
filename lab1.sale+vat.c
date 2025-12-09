#include <stdio.h>
int main(){
	double a,b,c,total,total1,total2,t1,t2,t0,t7,t9;
	scanf("%lf %lf %lf",&a,&b,&c);
	total = (a - (a * 0.05)) * 0.07;
	t0 = (a - (a * 0.05)) + total;
	total1 = a + b;
	t1 = (total1 - (total1 * 0.15)) * 0.07;
	t7 = (total1 - (total1 * 0.15)) + t1;
	total2 = a + b + c;
	t2 = (total2 - (total2 * 0.30)) * 0.07;
	t9 = (total2 - (total2 * 0.30)) + t2;

	printf("product A discount and vat= %.2lf\n",t0);
	printf("product B discount and vat= %.2lf\n",t7);
	printf("product C discount and vat= %.2lf\n",t9);
	return 0;

}

