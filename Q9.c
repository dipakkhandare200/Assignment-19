//Write a program that asks the user to enter a username. If the username entered is
//one of the names in the list then the user is allowed to calculate the factorial of a
//number. Otherwise, an error message is displayed
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int flag=0;
    char a[3][3][20]={
      {
          "dipak","3002"
      },
       {
          "ruturaj","2002"
      },
      {
          "dad","1972"
      }
      };
      char username[20];
      char password[20];
      printf("\n Enter the user name\n ");
      fgets(username,20,stdin);
      printf("\n Enter the password\n");
      fgets(password,20,stdin);
    for(int i=0;i<3;i++)
    {
        if((strcmp(username,a[i][0]))==0&&strcmp(password,a[i][1])==0)
        printf("login sucessful\n");
       flag=1;
    }

    if(flag==0)
    {
        printf("Not login\n");
    }
return 0;
}
