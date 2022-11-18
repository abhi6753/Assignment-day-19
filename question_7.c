//7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b=20;
    printf("Enter total number of IP:\n");
    scanf("%d",&a);
    fflush(stdin);
    char ip[a][b];
    printf("Enter %d IP address:\n",a);
    int i,j=0,k;
    for(i=0;i<a;i++)
    {
        fgets(ip[i],b,stdin);
        k = strlen(ip[i])-1;
        ip[i][k]='\0';
    } 
    short dot =0,flag=0; //Indicator
    int valid=0,not_valid=0;
    for(i=0;i<a;i++)
    {
        dot =0;
        flag =0;
        for(j=0;ip[i][j];j++)
        {
           if(ip[i][j]>=48 && ip[i][j]<=57)
           {
             continue;
           }
           else if(ip[i][j]=='.')
           {
             dot++;
           }
           else
           { 
             break;
           }
        }
        if((dot==3 )&& (j == strlen(ip[i])))
        {
          valid++; // to count valid ip
        } 
        else
        {
            not_valid++; // to count not valid ip
        }
    }
    if(valid==a)
    {
        printf("All ip addresses are valid");
    }
    else
    {
        printf("All ip addresses are not valid");
    }
    getch();
    return 0;
}