//Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf("Enter the string ");
    for(int i=0;i<6;i++)
    {
        fgets(str[i],20,stdin);
    }
    int vowels=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
            {
                vowels++;
            }
        }
        printf("%s=%d\n",str[i],vowels);
        vowels=0;

        }
    }

