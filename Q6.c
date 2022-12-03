//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[3][20];
    printf("Enter the palindrome string \n ");
    for(int i=0;i<3;i++)
    {
        fgets(str[i],20,stdin);
    }
    for(int i=0;i<3;i++)
    {
       int len=strlen(str[i]);
        if(str[i]!=str[len-i-1])
        {
         int flag=1;
         break;
         //printf("%s\n",str[i]);
         }

    }
    if(flag)
    {
        printf("\n This is palindrome");
    }
    else
     {
        printf("\n This is not palindrome list");
        }
}
