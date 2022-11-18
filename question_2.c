//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from\
the user.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a=5,b=50;
    char city[a][b];
    char Dcity[a][b]; // Duplicate of city name to work on it
    int i,j,cmp;
    printf("Enter %d city names:\n",a);
    for(i=0;i<a;i++)
    {
       fgets(city[i],b,stdin);
       j=strlen(city[i])-1;
       city[i][j]='\0';
       strcpy(Dcity[i],city[i]);
       strupr(Dcity[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            cmp = strcmp(Dcity[i],Dcity[j]);
            if(cmp>-1)
            {
                char temp[b];
                strcpy(temp,Dcity[i]);
                strcpy(Dcity[i],Dcity[j]);
                strcpy(Dcity[j],temp);
            }
        }
    }
    printf("After Sorting:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;Dcity[i][j];j++)
        {
            if(j>0)
            {
                Dcity[i][j]=Dcity[i][j]+32;
            }
        }
        printf("%s\n",Dcity[i]);
    }
    getch();
    return 0;

}
