//Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][20];
    printf("Enter the email string\n ");
    for(int i=0;i<3;i++)
    {
        fgets(str[i],20,stdin);
    }
    for(int i=0;i<3;i++)
    {
        if(strchr(str[i],'@')!=0)
         printf("%s",str[i]);
         }
    }
