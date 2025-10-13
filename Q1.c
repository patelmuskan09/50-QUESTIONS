//FIND THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY
#include <stdio.h>
int main(){
    int arr[5]={5,2,-1,200,100};
    int max=arr[0];
    int min=arr[4];
    int i;
    for(i=0;i<5;i++){
        if(arr[i]>max){
           max= arr[i];


     }
        printf("MAXIMUM ARRAY: %d",max);
   
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMINIMUM ARRAY: %d",min);
    return 0;
    }
}
