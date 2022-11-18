//8. Given a list of words followed by two words, the task is to find the minimum distance\
between the given two words in the list of words.\
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}\
 word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=5,b=50;    
    char word[a][b];
    int i,j;
    printf("Enter %d word:\n",a);
    for(i=0;i<a;i++)
    {
        fgets(word[i],b,stdin);
    }
    char word1[b];
    printf("Enter 1st word:\n");
    fgets(word1,b,stdin);
    char word2[b];
    printf("Enter 2nd word:\n");
    fgets(word2,b,stdin);
    int right_dis=0,left_dis=0,k,l; // distance
    short exist1=0,exist2=0;
    for(i=0;i<a;i++)
    {
        exist1 =0;
        for(j=0;word[i][j];j++)
        {
            if(word1[j]==word[i][j])
            {
               exist1 =1;
               continue;
            }
            else
            {
                break;
            }
        }
        if(exist1 == 1 && j == strlen(word1))
        {
            k=i;
            break;
        }
        else
        {
            if(i==a-1)
              exist1 =0;
            continue;
        }
    }
    if(exist1 !=1)
    {
       printf("1st word does not exist.\n");
       getch();
       return 0;
    }

    else
    {
      for(i=0;i<a;i++)
      {
        exist2 =0;
        for(j=0;word[i][j];j++)
        {
            if(word2[j]==word[i][j])
            {
               exist2 =1;
               continue;
            }
            else
            {
                break;
            }
        }
        if(exist2 == 1 && j == strlen(word2))
        {
            l=i;
        }
        else
        {
            if(i==a-1)
              exist2 =0;
            continue;
        }
      }
      if(exist1 !=1)
      {
        printf("2nd word does not exist.\n");
         getch();
         return 0;
      }
     
    }
    for(i=(k<l?k:l)+1;i<(k>l?k:l);i++)
    {
        right_dis++;
    }
    for(i=(k>l?k:l)+1;i<a;i++)
    {
        left_dis++;
    }
    left_dis = left_dis + (k<l?k:l);
    right_dis<left_dis?printf("output: %d",right_dis):printf("output: %d",left_dis);
    getch();
    return 0;  
}