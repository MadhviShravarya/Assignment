#include<stdio.h>
int main()
{
	int R;
	float A;
	printf("enter the radius of a circle\n",R);
	scanf("%d",&R);
	A=3.14*R*R;
	printf("Area of cicle is %f having radius %d",A,R);
	return 0;
}
