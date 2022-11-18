//1. Write a program to find the number of vowels in each of the 5 strings stored in two\
dimensional arrays, taken from the user.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=5,j=100,count=0;
    char str[i][j];
    int a,b;
    printf("Enter 5 string:\n");
    for(a=0;a<i;a++)
     fgets(str[a],j,stdin);
    for(a=0;a<i;a++)
    {   
        count =0;
        for(b=0;str[a][b];b++)
        {
            if(str[a][b]=='A'||str[a][b]=='E'||str[a][b]=='I'||str[a][b]=='O'||str[a][b]=='U'||str[a][b]=='A'+32\
              ||str[a][b]=='E'+32||str[a][b]=='I'+32||str[a][b]=='O'+32||str[a][b]=='U'+32)
            {
                count++;
            }
        }
        printf("%d vowels in %s\n",count,str[a]);
    }
    getch();
    return 0;
}

