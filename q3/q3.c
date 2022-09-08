//q3) Write a c program to sort array using stacks //
#include <stdio.h>
 
int main()
{
 int a[10], n, i, j, num, swap;
    printf("Enter number of elements");
    scanf("%d", &n);

    printf("%d", n);
        
        for (i=0; i<n; i++)
        scanf("%d", &a[i]);
        for(i=0; i<n-1; i++)
            {
                num=i;
            
             for(j=i+1; j<n; j++)
           {
            if(a[num] > a[j])
             num=j;
           }
            if(num != i)
             {
              swap=a[i];
              a[i]=a[num];
              a[num]=swap;
             }
            }
            printf("Sorted Array:");

return 0;
}