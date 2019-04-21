#include <stdio.h>
int main(void)
{
    int range,  a[30], flag, n;
    printf("Enter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1)\n");
    scanf("%d",&range);
    a[0]=1;
    a[1]=2;
    
    for(int i=2;i<range;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    
    printf("\nthe prime fibonacci numbers are ");
    for(int j=1;j<range;j++)
    {
       n=a[j];
       flag=0;
       for(int k = 2; k <= n/2; k++)
        {
            if(n%k == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
          printf("\n%d", n);
     
    }
    
    
    return 0;
}
