//Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf("Enter the string\n ");
    for(int i=0;i<6;i++)
    {
        fgets(str[i],20,stdin);
    }
    for(int i=0;i<5;i++)
    {
       printf("%d=%s\n",i,str[i]);

        }
    }

