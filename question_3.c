//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b = 100;
    char str[a][b];
    printf("Enter 5 name:\n");
    int i;
    for(i=0;i<a;i++)        // Take input in 2D array
    {
        fgets(str[i],b,stdin);
    }
    printf("You have entered:\n"); // Display
    for(i=0;i<a;i++)
    {
      printf("\n%s",str[i]);
    }
    getch();
    return 0;
}