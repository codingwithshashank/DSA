#include <iostrem.h>
#include <stdio.h>
void main ()
{
    int a[20]={78,8,41,7,9};
    printf("Enter a number that you want to search: ");
    scanf("%d", &s);
    for(i=0;i<s;i++)
    {
        if(a[i]==s)
        {
            printf("number is found");
            break;
        }

    }
if(i==s)
  {
    printf("number is not found");
  }
getch();
}
