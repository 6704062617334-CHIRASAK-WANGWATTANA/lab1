#include <stdio.h>
int main(){
	double a,b,c,total,total1,total2,t1,t2;
	scanf("%lf %lf %lf",&a,&b,&c);
	total = a - (a * 0.05);
	total1 = a + b;
	t1 = total1 - (total1 * 0.15);
	total2 = a + b + c;
	t2 = total2 - (total2 * 0.30);

	printf("product A discount = %.2lf\n",total);
	printf("product B discount = %.2lf\n",t1);
	printf("product C discount = %.2lf\n",t2);
	return 0;

}

