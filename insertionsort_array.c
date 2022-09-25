 //insertion sort algorithm
  #include<stdio.h>
 void display(int arr[],int n){
     printf("array elements are: ");
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     printf("\n");
 }
 int insertionsort(int a[],int n){
     int i,j,key;
     for(i=1;i<n;i++){
         key=a[i];
         j=i-1;
         while(j>=0 && a[j]>key){
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=key;
     }
 }
 int main(){
     int arr[6]={100,92,30,54,56,71};
     int size=sizeof(arr)/sizeof(int);
     display(arr,size);
     insertionsort(arr,size);
     display(arr,size);
 }