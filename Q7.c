//From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ip[3][20];
    printf("Enter the ip address \n");
    for(int i=0;i<3;i++)
    {
        fgets(ip[i],20,stdin);
    }

    for(int i=0;i<3;i++)
    {
            char *a = strtok(ip[i],".");

        while(a!=NULL)
        {
            int x=atoi(a);
            if((x>=0)&&(x<=255))
            {
                printf("%d",x);
                a=strtok(NULL,".");
            }
        }printf("\n");
    }
}
