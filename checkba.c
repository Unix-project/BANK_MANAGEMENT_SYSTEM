#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
int i,j;

void fordelay(int);

struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;	
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;

int main(float balance);







int main(float balance) {
	
	float number = 1234;
	int acc_no;
	int test=0;
    FILE *view;
	view=fopen("record.dat","r");
    printf("\n\n\t\t\tEnter the account number:");
    scanf("%d", &check.acc_no);
	
	
    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
    	if(check.acc_no==add.acc_no)
		{
    	printf("\t\t*****Your Account Balance is*****\n");
    	printf("\t\t\t\t%.2f\n\n", add.amt);
    	
    	
            
        
    	printf("\t\t*****Your details are as follows*****\n");
    	printf("\nACC. NO\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
    	printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf\n",add.acc_no,add.name,add.address,add.phone);
    	for(i=0;i<=6;i++)
        {
            fordelay(10000000000);
            printf(".");
        }
    	test++;
    }
    	
		
}
		
		fclose(view);
		system("cls");
  
}

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
