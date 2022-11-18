//9. Write a program that asks the user to enter a username. If the username entered is\
one of the names in the list then the user is allowed to calculate the factorial of a\
number. Otherwise, an error message is displayed
#include<stdio.h>
#include<conio.h>
#include<string.h>
void Fact(void)
{
    int num;
    printf("Enter number to find its Factorial:\n");
    scanf("%d",&num);
    int i,fact=1;
    if(num==0)
      printf("Factorial of %d is %d",num,fact);
    else
    {
      for(i=num;i>0;i--)
      {
        fact *=i; 
      }
      printf("Factorial of %d is %d",num,fact);
    }
    return; 
}
void check(int a,int b,char User[][b],char username[])
{
    int i,j,exist =0,access =0,len =0;
    for(i=0;i<a;i++)
    {
       exist =0;
       for(j=0;User[i][j];j++)
       {
           if(username[j]==User[i][j])
           {
               exist=1;
           }
           else
           {   
               exist =0;
               break;
           }
       }
       len = strlen(User[i]);
       if (exist == 1 && j==len)
       {
           access=1;
           break;
       }
       
    }
    if(access)
    {
        printf("Access granted !!\n");
        Fact();
    }
    else
    {
        printf("Error!!");
    }
    return;
}
int main()
{
    printf("Note: Space not allowed in username\n");
    int a=5,b=100;
    char userlist[a][b];
    int i,j,k,same;
    printf("Enter %d username:\n",a);
    for(i=0;i<a;i++)
    {   
        same=1;
        fgets(userlist[i],b,stdin);
        k=strlen(userlist[i])-1;
        userlist[i][k]='\0';
        for(j=0;userlist[i][j];j++)
        {
            if(userlist[i][j]==32)
            {
              printf("Space does not allowed.\n");
              getch();
              return 0;
            }
            else
            {
                continue;
            }      
        }
        if(i>0)
        {

            same = strcmp(userlist[i],userlist[i-1]);
            if(same==0)
            {
                printf("\n%s are not availabe",userlist[i]);
                printf("\nPlease enter another username\n");
                i--;
            }
        }
       
    }
    char username[b];
    printf("Enter your user name:\n");
    fgets(username,b,stdin);
    for(i=0;username[i];i++)
    {
        if(username[i]==32)
        {
            printf("Space does not allowed.\n");
            getch();
            return 0;
        }
    }
    check(a,b,userlist,username);
    getch();
    return 0;
}