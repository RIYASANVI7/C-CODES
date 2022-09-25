 //selection sort algorithm
  #include<stdio.h>
 void display(int arr[],int n){
     printf("array elements are: ");
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     printf("\n");
 }
 int selectionsort(int arr[],int n){
     int i,j,temp,minindex;
     int smallest;
     for(i=0;i<n-1;i++){
         minindex=i;
         for(j=i+1;j<n;j++){
             if(arr[j]<arr[minindex]){
                 minindex=j;
             }
         }
                 temp=arr[i];
                 arr[i]=arr[minindex];
                 arr[minindex]=temp;
         }
 }
 int main(){
     int arr[6]={100,92,30,54,56,71};
     int size=sizeof(arr)/sizeof(int);
     display(arr,size);
     selectionsort(arr,size);
     display(arr,size);
 }