//Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20],t[100];
    printf("Enter the string \n");
    for(int i=0;i<11;i++)
    {
        fgets(str[i],20,stdin);
    }
    for(int i=0;i<11;i++)
    {
        for(int j=i+1;j<12;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(t,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[i],t);
            }
        }
       }
       printf("\n Sorting the name");
       for(int i=0;i<11;i++)
       {
        printf("\n %s",str[i]);
        }
    }
