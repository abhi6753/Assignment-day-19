//5. Suppose we have a list of email addresses, check whether all email addresses have\
‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a=4,b=100;
    char str[a][b];
    printf("Enter %d email address:\n",a);
    int i,j;
    for(i=0;i<a;i++)
    {
        fgets(str[i],b,stdin);
    }
    int t,c=0,k=1; // flag and count
    for(i=0;i<a;i++)
    {
        t=0;
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='@')
            {
                t=1;
                c++;
               break;    
            }         
        }
        if(t==0)
        {
            if(k) //to print odd email line only one time
            {
                printf("\nOdd email:\n");
                k--;
            }
            printf("%s\n",str[i]);
        }
    }
    if(t==1&&c==a)
       printf("All eamil have '@' symbol.");
    getch();
    return 0;
}