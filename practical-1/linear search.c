#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 60;
    
  for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Element %d found at index %d\n", target, i);
            return 0;
        }
    }
    printf("number not found"); 
    
}