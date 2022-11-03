#include <stdio.h>

int main()
{
      int num,factorial=0,ii;

    printf("Enter a positive int: ");
    scanf("%d",&num);
    
    for(ii=1;ii<=num;ii++) 
    {
        factorial += ii;
    }
    
    printf("the factorial is %d",factorial);
    

    return 0;
}
