#include<stdio.h>
int main()
{
	int English,Maths,Science,Psychology,History,Total;
	float average;
	//asking for input
	printf("Enter the marks of English,Maths,Science,Psychology,and History:\n");
	scanf("%d%d%d%d%d",&English,&Maths,&Science,&Psychology,&History);
	Total=English+Maths+Science+Psychology+History;
	average=Total/5.0;
	printf("Total marks of the student:%d\n",Total);
	printf("Average marks of the student:%.2f\n",average);
	return 0;
}
