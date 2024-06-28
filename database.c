
#include <stdio.h>
void linear_seq(int a[],int s,int r)
{
      int i;
    for (i = 0; i < r; i++)
   {
        if (a[i] == s) 
       {
            printf("Number is          available\n");
            break;
        }
    }

if (i == r) 
   {
        printf("Number is not available\n");
    }
 }

int main() 
{
    int a[20], i, s,r;
    printf("Enter a range:\n");
    scanf("%d",&r);
   
    printf("Enter a %d number:",r);
    for (i = 0; i < r; i++) 
   {
        scanf("%d", &a[i]);
    }
    printf("search: ");
    scanf("%d",&s);
    linear_seq(a,s,r);
    getchar();
}