#include <stdio.h>

int main()
{
    printf("Please enter all your 10 numbers: \n");
    int n = 0;
    scanf("%d", &n);
    
    int min=n, max=n;
    for (int i = 1; i<=9; i++) {
        scanf("%d", &n);
      
        min = (n < min) ? n : min;
        max = (n > max) ? n : max;
        
    }
    printf("Min=%d\nMax=%d", min, max);
    
    return 0;
}
