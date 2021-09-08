#include<stdio.h>
int total(int,int);
int main()
{
	int a,c,d,e,g,k,l,f,s=0,ch,x;
	int i,j;
	int p[31]={0,300,500,250,600,900,700,500,650,1500,2500,2000,1100,600,900,750};
	int h[7]={0,50,30,20,60,20,30};
	do{
	
	printf("\t\t\t**** WELCOME TO PIZZA HUT ****\n"); 
	
	printf("\nPRESS 1  FOR VEG PIZZA");  
	printf("\n      2  FOR NON VEG PIZZA");
	printf("\n      3  FOR NEAPOLITAN PIZZA");
	printf("\n      4  FOR MARINARO PIZZA");
	printf("\n      5  FOR MARGHERITA PIZZA");
	printf("\n      6  FOR FRANCE STYLE PIZZA");
	printf("\n      7  FOR CHICAGO PIZZA");
	printf("\n      8  FOR NEW YORK STYLE PIZZA");
	printf("\n      9  FOR SICILIAN PIZZA");
	printf("\n      10 FOR GREEK PIZZA");
	printf("\n      11 FOR CALIFARNIA PIZZA");
	printf("\n      12 FOR TOMATO PIE PIZZA");
	printf("\n      13 FOR CHEESE PIZZA");
	printf("\n      14 FOR MIX PIZZA");
	printf("\n      15 FOR PUDINA PIZZA\n\n Your order-->");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("\nYOU HAVE SELECTED VEG PIZZA");
			break;
		case 2:
			printf("\nYOU HAVE SELECTED NON VEG PIZZA");
			break;	
		case 3:
			printf("\nYOU HAVE SELECTED NEAPOLITAN PIZZA");
			break;
		case 4:
			printf("\nYOU HAVE SELECTED MARINARO PIZZA");
			break;	
		case 5:
			printf("\nYOU HAVE SELECTED MARGHERITA PIZZA");
			break;	
		case 6:
			printf("\nYOU HAVE SELECTED FRANCE STYLE PIZZA");
			break;	
		case 7:
			printf("\nYOU HAVE SELECTED CHICAGO PIZZA");
			break;
		case 8:
			printf("\nYOU HAVE SELECTED NEW YORK STYLE PIZZA");
			break;
		case 9:
			printf("\nYOU HAVE SELECTED SICILIAN PIZZA");
			break;	
		case 10:
			printf("\nYOU HAVE SELECTED GREEK PIZZA");
			break;
		case 11:
			printf("\nYOU HAVE SELECTED CALIFARNIA PIZZA");
			break;
		case 12:
			printf("\nYOU HAVE SELECTED TOMATO PIE PIZZA");
			break;
		case 13:
			printf("\nYOU HAVE SELECTED CHEESE PIZZA");
			break;
		case 14:
			printf("\nYOU HAVE SELECTED MIX PIZZA");
			break;
		case 15:
			printf("\nYOU HAVE SELECTED PUDINA PIZZA");
			break;
		default :
			printf("\nINVALID INPUT");
			break;
	}
	
	printf("\n\nWHICH SIZE OF PIZZA DO YOU WANT\n\n");
	printf("PRESS L FOR LARGE SIZE PIZZA"); 
	printf("\nPRESS M FOR MEDIUM SIZE PIZZA");
	printf("\nPRESS S FOR SMALL SIZE PIZZA\n\n Your Selecton-->");
	x=getche();
	
	if((x=='l')||(x=='L'))
	{
		c=p[i];
		printf("\nPRICE OF EACH LARGE PIZZA=%d",c);
	}
	else if((x=='m')||(x=='M'))
	{
		c=0.8*p[i];
		printf("\nPRICE OF EACH MEDIUM PIZZA=%d",c);
	}
	else if((x=='s')||(x=='S'))
	{
		c=0.5*p[i];
		printf("\nPRICE OF EACH SMALL PIZZA=%d",c);	
	}
	else
	{
		printf("INVALID INPUT");
	}
	printf("\n\nHOW MANY PIZZA DO YOU WANT TO ORDER\n Number Of pizza/s--->");
	scanf("%d",&d);
	e=c*d;
	printf("\nTOTAL AMOUNT OF PIZZA=%d",e);
	printf("\nSIR DO YOU ALSO WANT BREVAGE\nPRESS Y FOR BEVERAGE\nPRESS N FOR COMPLETION \n\n Your choice--->");
	ch=getche();
	if((f=='y')||(f=='Y'))
	{
		printf("\nPRESS 1 FOR COFFEE");
		printf("\nPRESS 2 FOR TEA");
		printf("\nPRESS 3 FOR COLD DRINKS");
		printf("\nPRESS 4 FOR SODA");
		printf("\nPRESS 5 FOR MILK SHAKE");
		printf("\nPRESS 6 FOR WATER\n\n Your Choice--->");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				printf("\nYOU HAVE SELECTED COFFEE");
				break;
			case 2:
				printf("\nYOU HAVE SELECTED TEA");
				break;
			case 3:
				printf("\nYOU HAVE SELECTED COLD DRINKS");
				break;
			case 4:
				printf("\nYOU HAVE SELECTED SODA");
				break;
			case 5:
				printf("\nYOU HAVE SELECTED MILK SHAKE");
				break;
			case 6:
				printf("\nYOU HAVE SELECTED WATER");
				break;
		}
		printf("\nPRICE OF EACH BEVERAGE=%d",h[j]);
		printf("\n\n\nHOW MANY BEVERAGE YOU WANT\n\n Your Input--->");
		scanf("%d",&g);
		k=g*h[j];
		printf("\nTOTAL AMOUNT OF BEVERAGE=%d",k);
	}
	l=total(e,k);s+=l;
	printf("\nTOTAL AMOUNT=%d",s);
	printf("\n\nIf you want to purchase more pizza and beverages\n press 'Y' else 'N'\n\n Your Choice--->");
	ch=getche();
	}
	while(ch=='Y'||ch=='y');
	printf("\n\t\t\t**** THANK YOU !HAVE A NICE DAY ****");
	return 0;
}
int total(int e,int k)
{
	return e+k;
	
}

