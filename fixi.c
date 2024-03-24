#include<stdio.h>
const int size = 10;
int main()

{
	int xi[size],fi[size],fixi[size];
	int totalx = 0;
	int totalf = 0;
	int totalfixi = 0;
	for(int i=1; i<=size; i++)
	{
		printf("\nenter xi  %d  :" ,i);
		scanf("%d",&xi[i]);

		totalx +=xi[i];//total of xi
		
	}
	
	for(int i=1; i<=size; i++)
	{
		printf("\nenter fi  %d  :",i);
		scanf("%d",&fi[i]);
		
		totalf +=fi[i ];//total of fi
	}
	
	printf("xi     fi    xifi\n");
	
	for(int i=1; i<=size; i++)
	{
		fixi[i]= xi[i] * fi[i];
		
		printf("\n  %d   | %d |  %d|\n",xi[i],fi[i],fixi[i]);
		
		
		printf("________________");	
		totalfixi +=fixi[i];//total of fixi
		
		
		
		
	}
	printf("\n Total | %d |  %d|",totalf,totalfixi);
	printf("\n fixi/fi :%d",totalfixi/totalf);

	

	
	
	
}

