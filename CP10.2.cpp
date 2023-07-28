#include<stdio.h>
#include<conio.h>
struct customer
{
	int ac,bal;
	char name[100];
}a[250];
int main()
{
	int i,n,ch,acn,bala;
	printf("enter maximium number of customers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d customer account number, balance, and name:",i+1);
		scanf("%d %d %s",&a[i].ac, &a[i].bal, &a[i].name);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].bal<1000)
		{
			printf("Account number=%d\t Balance=%d\t Name=%s\n",a[i].ac,a[i].bal,a[i].name);
		}
	}
	printf("Deposit or Withdrawal?");
	printf("Press 0 for deposit and 1 for withdrawal");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("enter your account number=\n");
		scanf("%d",&acn);
		printf("enter balance to be deposited=\n");
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
		printf("enter your account number=\n");
		scanf("%d",&acn);
		printf("enter balance to be withdrawn=\n");
		scanf("%d",&bala);
		for(i=0;i<n;i++)
		{
			if(a[i].ac==acn)
			{
				if(a[i].bal<bala)
				{
					printf("insufficient balance");
				}
				else
				{
					a[i].bal=a[i].bal-bala;
				}
			}
		}
	}
	printf("your account information after transcation=\n");
	for(i=0;i<n;i++)
	{
		printf("account number=%d\t balance=%d\t name=%s\n",a[i].ac,a[i].bal,a[i].name);
	}
	getch();
}
