//Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5]=[200]= {'the','quick','brown','fox','quick"};
    int i,w1=-1,w2=-1,min=10000;
    char word1[1]="quick";
    char word2[2]="fox";
    for(int i=0;i<6;i++)
    {
        if(strcmp(str[i],word1[1])==0)
        {
            w1=i;
        }
         if(strcmp(str[i],word2[2])==0)
        {
            w2=i;
        }
        if(w1!=-1&&w2!=-1)
        {
            min=abs(w2-w1);
        }
        printf("%d",min-1);
         }
    }
