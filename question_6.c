//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i, a = 100;
    char str[a];
    printf("Enter your string:\n");
    fgets(str,a,stdin);
    i = strlen(str)-1;
    str[i]='\0';
    char Dstr[strlen(str)];
    strcpy(Dstr,str);
    strlwr(Dstr);
    i=0;
    int f=0;
    int j=strlen(Dstr)-1;
    while(i<j)
    {
       if(Dstr[i]==Dstr[j])
        {
            f=1;
        }
        else
        {
            break;
        }
        i++;
        j--;
    }
    if(f)
     printf("Palindrome string");
    else
     printf("Not palindrome");
    getch();
    return 0;
      
}