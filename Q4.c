//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20],t[20];
    int found=0;
    printf("Enter the string \n");
    for(int i=0;i<3;i++)
    {
        fgets(str[i],20,stdin);
    }
    printf("\n Enter the string you want to search\n");
    fgets(t,20,stdin);
    for(int i=0;i<3;i++)
    {
         if(strcmp(t,str[i])==0)
            {
                printf("\n String is found");
                found=1;
            }
       }
       if(found==0)
            {
                printf("\n String not found");
            }
    }
