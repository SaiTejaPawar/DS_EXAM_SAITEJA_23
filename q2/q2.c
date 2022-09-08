//q2) Write a c program to implement insertion sort algorithm//
#include<stdio.h>

void main()
{
        int a[40], n, temp, i, j;

        printf("\n enter the numbers: ");
        scanf("%d", &n);
        printf("\n enter the elements of the array:");

        for(i=0; i<n; i++)
        {
         scanf("\n%d", &a[i]);
        }

	for(i=1; i<n; i++)
        {
                temp = a[i];
                j = i-1;
                while(temp < a[j] && j>=0)
                {
                   a[j+1] = a[j];
                   j = j-1;
                }
                a[j+1] = temp;
        }

        printf("\nThe list of  insertion sort in the order:\n");
        for(i=0; i<n; i++)
        printf("\n %d", a[i]);
}
