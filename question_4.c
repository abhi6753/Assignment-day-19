//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a=5,b=100;
    char str[a][b];
    char Dstr[a][b]; //Create duplicate to work on it
    printf("Enter your string:\n");
    int i,j,k;
    for(i=0;i<a;i++)
    {
       fgets(str[i],b,stdin);
       k=strlen(str[i])-1;
       str[i][k]='\0';
    }
    for(i=0;i<a;i++)
    {
        strcpy(Dstr[i],str[i]);
        strlwr(Dstr[i]);
    }
    char str1[b];
    printf("Enter string to search:\n");
    fgets(str1,b,stdin);
    k=strlen(str1)-1;
    str1[k]='\0';
    char Dstr1[strlen(str1)]; //Create duplicate to work on it
    strcpy(Dstr1,str1);
    strlwr(Dstr1);
    int f;
    for(i=0;i<a;i++)
    {
        f=0;
        for(j=0;Dstr[i][j]&&Dstr1[j];j++)
        {
            if(Dstr[i][j]==Dstr1[j])
            {
                f =1;
            }
            else
            {
                break;
            }
        }
        if((f==1)&&(j==strlen(Dstr[i])))
        {
            printf("Available");
            getch();
            return 0;
        }
    }
    printf("Not available");
    getch();
    return 0;
    
}