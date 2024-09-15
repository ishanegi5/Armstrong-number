#include <stdio.h>
#include <math.h>
int main()
{
    int n,b,num,a,p=0,digits=0;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    
    n=b=num;
    while(b!=0){
        digits++;
        b/=10;
    }
    while(n!=0)
    {  
        a=n%10;
         p=p+pow(a,digits);
        n/=10;
    }
    if (p==num)    
    
    printf("Armstrong number");
    else
    printf("Not armstrong number");
    return 0;
}
