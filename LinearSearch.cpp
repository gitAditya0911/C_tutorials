int linear_search(int arr[], int n, int x) 
 {
    int i;
    for (i = 0; i < n; ++i) 
    {
       if (arr[i] == x) 
       {
            return i;
       }
    }
    return -1;
 }
  
 int main()
 {
    int x, n, idx;
    int arr[] = { 5,8,1,2,13,7,9,10,11,6 };
    // length of array
    n = sizeof(arr) / sizeof(int);
    printf("\n\n   Enter value you want to search: ");
    scanf("%d", &x);
    idx = linear_search(arr, n, x);
    if (idx == -1) 
    {
        printf("   %d is not found in the array \n", x);
    }
    else 
    {
        printf("   %d is present in the array at index %d \n", x, idx);
    }
 }
