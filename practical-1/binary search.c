#include <stdio.h>

int main()
{
    int n = 5;
    int low = 0;
    int high = n - 1;
    int num = 60;
    int arr[] = {10, 20, 30, 40, 50};
    

    while (low <= high)
    {
        int mid = (low+high)/2;

        if (arr[mid]==num)
        {
            printf("The target value: %d", arr[mid]);
            return 0;
        }
        else if (arr[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("number not found");
     
}