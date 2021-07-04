#include <stdio.h>

// function to sort the array in ascending order
void Array_sort(int *array , int n)
{
    // declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("\nThe array after sorting is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray_1[%d] : %d",i,array[i]);
    }
}

/** THE CONCEPT OF MEDIAN ----------------------------------
 "Basically a median is the value present at the center of a
 sorted array list. To calculate the median first we need to
 sort the list in ascending order.
 If the number of elements are even , then the median
 will the average of two numbers in the middle.

 But the number is odd then the middle element
 of the array after sorting will be considered as the median."
 */


// function to calculate the median of the array
float Find_median(int array[] , int n)
{
    float median=0;

    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];

    return median;
}

// function to calculate the mean of the array
float Find_mean(int array[] , int n){
   float mean,sum;
   int i;
   sum = 0;

   for(i = 0; i < n; i++) {
      sum+=array[i];
   }
   mean = sum/n;
   return mean;
}

// function to calculate multiplication of the array
int Prod_arr(int array[] , int n) {
   int kali = 1;
   //Wil multiply each element and store it in kali
   for (int i = 0; i < n; i++)
   kali = kali * array[i];
   return kali;
}

//Main Program
int main()
{
    // declare two int arrays
    int array_1[30] = {0};
    // declare some local variables
    int i=0 ,n=0;

    float median=0;
    float mean=0;
    int kali=0;

    printf("\nEnter the number of elements for the array : ");
    while(1) {
        if (scanf("%d", &n) != 1) { /* Input "abc" */
            printf("Invalid input. Try again\n");
            return 0;
        } else {
            break;
        }
    }

    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array_1[%d] : ",i);
        scanf("%d",&array_1[i]);
    }
    // Sort the array in ascending order
    Array_sort(array_1 , n);

    // Now pass the sorted array to calculate
    median = Find_median(array_1 , n);
    mean   = Find_mean(array_1 , n);
    kali = Prod_arr(array_1 , n);

    printf("\n\nThe median is : %0.2f",median);
    printf("\nThe mean is : %0.2f",mean);
    printf("\nThe multiplication is : %d\n",kali);
    return 0;
}
