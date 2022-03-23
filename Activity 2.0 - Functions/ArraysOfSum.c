//TADAYCA, JAYSON L.
#include<stdio.h>

int main()
{
    int a[5],i,sum=0;
    printf("Enter elements in array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<5; i++)
    {
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;
}
