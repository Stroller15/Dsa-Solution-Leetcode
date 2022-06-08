// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends

void rev(int arr[] , int n ,int st  , int end ){
    
    while(st < end){
         int temp = arr[st];
         arr[st] = arr[end];
         arr[end] = temp;
         st++;
         end--;
         
    }
   
}


void rotate(int arr[], int n)
{
    rev(arr , n , 0 , n-1);
    rev(arr, n , 1 , n-1);
    
}