#include<stdio.h>
const int size = 10;
int main()
{
	int roll[size],marks[size];
	char name[size][100];
	int rmarks =0;
	int i=1;


	for(int i=1; i<=size; i++) //get name
	{
		printf("Name : ");
		scanf("%s",name[i]);
	}


	for(int i =1; i<=size; i++) //get roll no
	{
		printf("Roll No: ");
		scanf("%d",&roll[i]);
	}
	do
	{
	for(int i=1; i<=size; i++) //get marks
	{
		printf("Marks : ");
		scanf("%d",&marks[i]);
	}
	printf("\nplease enter marks between 0-35\n");
	}
	while(marks[i]<0 || marks[i]>35);


	printf("Name    |Roll  |Marks    |\n");
	printf("__________________________\n");
	for(int i=1; i<=size; i++)
	{

		printf("%s      |%d     |%d     \n",name[i],roll[i],marks[i]);
		printf("__________________________|\n");
	}
	printf("enter roll : ");
	scanf("%d",&rmarks);
	printf("Marks of Roll no %d is : %d",rmarks,marks[rmarks]);
	



	





}