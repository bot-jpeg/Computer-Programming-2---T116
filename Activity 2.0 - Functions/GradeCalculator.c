//TADAYCA, JAYSON L.

#include<stdio.h>

int main()
{
   
    float   n1, n2, n3, n4, n5, average;
    printf("PLEASE INPUT ALL YOUR GRADES \nEnglish: ");
    scanf("%f", &n1);
    printf("Mathematics: ");
    scanf("%f", &n2);
    printf("Science: ");
    scanf("%f", &n3);
    printf("Filipino: ");
    scanf("%f", &n4);
    printf("PE: ");
    scanf("%f", &n5);

    average = (n1+n2+n3+n4+n5) / 5;
    printf ("Your average is: %.2f\n", average);
    return 0;
}
