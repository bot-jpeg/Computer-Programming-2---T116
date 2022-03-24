//TADAYCA, JAYSON L.
#include <stdio.h>

int main()
{
    int a[10],i,n,sum=0;
   
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter the %d elements of the array:\n", n);
    for(i=0; i<n; ++i)
    {
        printf("Enter elements %d: ", i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;
}
