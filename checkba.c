#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
int i,j;
int main_exit;
void fordelay(int);
void view_list();
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
void menuExit();




void view_list()
{
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
       {
           printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    
}

int main(float balance) {
	float number = 1234;
  int pass;
  
  printf("\n\n\t\t\tEnter the PIN No:");
  scanf("%d", &pass);

  if (pass == number)
    {
      printf("\n\nPIN Matched!\nLOADING");
      	printf("You Choose to See your Balance\n");
    	printf("****Your Available Balance is:   $%.2f\n\n", balance);
        for(i=0;i<=6;i++)
        {
            fordelay(1000000000);
            printf(".");
        }
        system("cls");
       
   	view_list();
    }
  else
    {
      printf("Invalid\n Try Again");
      
    }
	
   
    
}

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

