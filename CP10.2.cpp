#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct customer
{
	int ac,bal;
	char name[100];
}a[250];
int main()
{
	int i,n,ch,acn,bala;
	printf("Enter maximum number of customers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter customer %d's Account Number, Balance, and Name:\n",i+1);
		scanf("%d %d %s",&a[i].ac, &a[i].bal, &a[i].name);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].bal<1000)
		{
			printf("\nAccount Number=%d\t Balance=%d\t Name=%s\n",a[i].ac,a[i].bal,a[i].name);
		}
	}
	printf("\nDeposit or Withdrawal?\n");
	printf("\nPress 1 for deposit and 0 for withdrawal\n");
	scanf("%d",&ch);
	fflush(stdin);
	if(ch==1)
	{
		printf("\nEnter your account number=\n");
		scanf("%d",&acn);
		printf("\nEnter balance to be deposited=\n");
		scanf("%d",&bala);
		for(i=0;i<n;i++)
		{
			if(a[i].ac==acn)
			{
				a[i].bal=a[i].bal+bala;
			}
		}
	}
	if(ch==0)
	{
		printf("\nEnter your account number=\n");
		scanf("%d",&acn);
		printf("\nEnter balance to be withdrawn=\n");
		scanf("%d",&bala);
		for(i=0;i<n;i++)
		{
			if(a[i].ac==acn)
			{
				if(a[i].bal<bala)
				{
					printf("\nInsufficient Balance\n");
				}
				else
				{
					a[i].bal=a[i].bal-bala;
				}
			}
		}
	}
	printf("\nYour account information after transcation:\n");
	for(i=0;i<n;i++)
	{
		printf("\nAccount Number=%d\t Balance=%d\t Name=%s\n",a[i].ac,a[i].bal,a[i].name);
	}
	getch();
}
