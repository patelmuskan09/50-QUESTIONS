//REVERSE AN ARRAY IN PLACE
#include<stdio.h>

int main(){
    int arr[5];
    int i,n, temp;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

   }
   printf("Reversed Array:\n");
   for(i=0;i<n;i++){
    printf("%d", arr[i]);
   }
   return 0;
}