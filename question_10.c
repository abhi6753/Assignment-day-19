//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define a 5
#define b 31
int i;
char Username_list[a][b];
char user[b];
char password_list[a][b];
char password[b];
void signup(void);
void forget_password(void);
int main(void);
void login()
{
  int ch, j,cmp,t=0;
  printf("\t\t\t..............................................\n");
  printf("\t\t\t                LOGIN Page                    \n");
  printf("\t\t\t..............................................\n");
  printf("\t\t\t\tEnter user name: ");
  fgets(user,b,stdin);
  user[strlen(user)-1]='\0';
  if(i==0)
  {
      printf("\t\t\t\tUsername not found\n");
      printf("\t\t\t\tPlease, SIGN UP first\n\n");
    login:printf("\t\t\t\t|      1. SIGNUP   \t\t|\n");
      printf("\t\t\t\t|      2. MENU     \t\t|\n");
      printf("\t\t\t\t|      3. EXIT     \t\t|\n\n");
      printf("\t\t\t\tEnter your choice: ");
      scanf("%d",&ch);
      fflush(stdin);
      switch(ch)
      {
          case 1:signup();
          case 2: main();
          case 3: exit(0);
          default:printf("\t\t\t\tPlease enter correct option, Try again\n");
          goto login;
      }      
   }
  for(j=0;j<i;j++)
  {
     cmp = strcmp(Username_list[j],user);
     if(cmp==0)
     {
        break;
     }
  }
  if(cmp!=0 && j==i)
  {
     goto login;
  }
  pass:printf("\t\t\t\tEnter your password: ");
  fgets(password,b,stdin);
  password[strlen(password)-1]='\0';
  for(j=0;j<i;j++)
  {
      cmp = strcmp(password_list[j],password);
      if(cmp==0)
      {
          break;
      }
  }
  if(cmp!=0 && j==i)
  {
      printf("\t\t\t\tWrong password. Try again.\n");
      t++;
      if(!(t<3))
      {
         forget_password();
      }
      else
      {
           goto pass;
      }
  }
  else
  {
      printf("\t\t\t\tLogin Successfully\n\n");
  }
 choice: printf("\t\t\t\t|  1. Log out  \t\t|\n");
  printf("\t\t\t\t|  2. EXIT     \t\t|\n\n");
  printf("\t\t\t\tEnter your choice: ");
  scanf("%d",&ch);
  fflush(stdin);
  switch(ch)
  {
     case 1: printf("\t\t\t\tYou're logged out\n\n");
             main();
     case 2: exit(0);
     default:printf("\t\t\t\tPlease enter correct option, Try again\n\n");
     goto choice;
  }

}
void signup(void)
{
   if(i<a)
   {
   int j,cmp,len,k,count=0;
   printf("\t\t\t..............................................\n");
   printf("\t\t\t                Signup Page                   \n");
   printf("\t\t\t..............................................\n\n");
   create:printf("\t\t\t\tCreate username: ");
   fgets(user,b,stdin);
   user[strlen(user)-1]='\0';
   len = strlen(user);
   for(j=len-1;j>=0;j--)
   {
       if(user[j]==32)
       {
           for(k=j-1;k>=0;k--)
           {
               if(user[k]!=32)
               {
                   count++;
                   break;
               }
           }
       }
      else
      {
         count++;
      }
   }
   len = count;
   if(len>5)
   {
       for(j=0;user[j];j++)
       {
           if(user[len-1]=='.')
           {
               printf("\t\t Sorry,the last character of your username must be an alphabet or number.\n\n");
               goto create;
           }
           if((user[j]>=48 && user[j]<=57)||(user[j]>=65&& user[j]<=90)||(user[j]>=97&&user[j]<=122)||(user[len-1]!='.'))
           {
               continue;
           }
           else
           {
               printf("\t\t  Sorry,only alphabets,numbers, and periods(.) are allowed.\n\n");
               goto create;
           }
       }
   }
   else
   {
       printf("\t\t  Sorry,your username must be between 6 and 30 character long.\n\n");
       goto create;
   }
   if(i==0)
    strcpy(Username_list[i],user);
   else
   {
       for(j=0;j<i;j++)
       {
           cmp = strcmp(Username_list[j],user);
           if(cmp==0)
           {
               break;
           }
       }
       if(j!=i)
       {
           printf("\t\t\tThis username is taken. Try another.\n\n");
           goto create;
       }
   }
   strcpy(Username_list[i],user);
  pass: printf("\t\t\t\tCreate Password: ");
   fgets(password,b,stdin);
   password[strlen(password)-1]='\0';
   len = strlen(password);
   if(len<7)
   {
     printf("\t\t  password must be at least 8 characters long.\n\n");
     goto pass;
   }
   strcpy(password_list[i],password);
   printf("\t\t\t\tSignup Successfully\n\n");
       i++;
   }
   else
   {
       printf("\t\t\t\tNot more registation\n\n");
   }
   main();
}
void forget_password()
{
    int ch, j,cmp;
    printf("\t\t\t..............................................\n");
    printf("\t\t\t              Forget password                 \n");
    printf("\t\t\t..............................................\n\n");
    printf("\t\t\t\tEnter username: ");
    fgets(user,b,stdin);
    user[strlen(user)-1]='\0';
    for(j=0;j<i;j++)
    {
        cmp = strcmp(Username_list[j],user);
        if(cmp==0)
        {
           printf("\t\t\t\tpassword is %s\n\n",password_list[j]);
           break;
        }
    }
    if(cmp!=0&&j==i)
    {
        printf("\t\t\t\tUser does not exist.\n");
        printf("\t\t\t\tPlease signup first.\n\n");
     ch:printf("\t\t\t\t|      1. SIGNUP   \t\t|\n");
        printf("\t\t\t\t|      2. MENU     \t\t|\n");
        printf("\t\t\t\t|      3. EXIT     \t\t|\n\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d",&ch);
        fflush(stdin);
        switch(ch)
        {
            case 1: signup();
            case 2: main();
            case 3: exit(0);
            default: printf("\t\t\t\tPlease enter correct option, Try again\n\n");
            goto ch;
        }
    }
ch1:printf("\t\t\t\t|       1. LOGIN    \t\t|\n");
    printf("\t\t\t\t|       2. MENU     \t\t|\n");
    printf("\t\t\t\t|       3. EXIT     \t\t|\n\n");
    printf("\t\t\t\tEnter your choice: ");
    scanf("%d",&ch);
    fflush(stdin);
    switch(ch)
    {
        case 1: login();
        case 2: main();
        case 3: exit(0);
        default: printf("\t\t\t\tPlease enter correct option, Try again\n\n");
        goto ch1;
    }
}
int main()
{
    int ch;
       printf("\t\t\t..............................................\n"); 
       printf("\t\t\t                    MENU                      \n");
       printf("\t\t\t..............................................\n\n");
       printf("\t\t\t\t|     1. LOGIN            \t|\n");
       printf("\t\t\t\t|     2. SIGNUP           \t|\n");
       printf("\t\t\t\t|     3. FORGET PASSWORD  \t|\n");
       printf("\t\t\t\t|     4. EXIT             \t|\n\n");
       printf("\t\t\t\tEnter your choice: ");
       scanf("%d",&ch);
       printf("\n\n");
       fflush(stdin);
       switch(ch)
       {
           case 1:
                login();
           case 2:
                signup();
           case 3:
                forget_password();
           case 4:
             exit(0);
           default:
            printf("\t\t\tError, Please enter correct choice\n\n");
       }
    getch();
    return 0;
}