#include<stdio.h>
int main()
{
	//declare variables
	float len,wid,area;
	//take inputs
	printf("Enter length & width of Rectangle(in cm):");
	scanf("%f%f",&len,&wid);
	area=len*wid;
	printf("area of rectangle=%.3fcm\n",area);
	return 0;
}
