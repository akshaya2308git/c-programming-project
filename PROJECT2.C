#include<stdio.h>
int main()
{
 int epin,pin=1234,choice;
 float balance=10000,amount;
 printf("enter the pin :");
 scanf("%d",&epin);
 if(epin!=pin)
 {
  printf("Invalid pin\n");
  return 0;
 }
 printf("log in successful\n");
 do
 {
  printf("---menu----\n");
  printf("\n1.check balance\n");
  printf("\n2.withdraw\n");
  printf("\n3.deposit\n");
  printf("\n4.exit\n");
  printf("enter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  {
   printf("total balance=%f",balance);
   break;
  }
  case 2:
  {
    printf("enter the withdraw amount:\n");
    scanf("%f",&amount);
    if(amount<=0)
      printf("\n invalid amount:\n");
    else if (amount>balance)
      printf("\ninsufficient balance\n");
    else
   {
    balance=balance-amount;
    printf("\nwithdrawal successful\n");
    printf("\nnew balance+%f",balance);
  }
  break;
  }
  case 3:
  {
   printf("\n enter the deposit amount:");
   scanf("%f",&amount);
   if(amount>0)
   {
    balance+=amount;
    printf("\ndeposit successfully\n");
    printf("total amount:%f",balance);
    break;
   }
  }
  case 4:
  {
   printf("\n thank you\n");
   break;
  }
  default:
  {
   printf("\n invalid choice\n");
  }

 }while(choice!=4);
 return o;
}
