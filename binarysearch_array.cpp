 #include<stdio.h>
 void display(int arr[],int n){
 	int i;
     printf("array elements are: ");
     for( i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
 }
 //binary search
 int binarysearch(int arr[],int size,int element){
     int low=0,high=size-1,mid;
     mid=(low+high)/2;
     while(low<=high){
         if(arr[mid]==element){
             return mid;
         }
         else if(arr[mid]<element){
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return -1;
 }
 int main(){
     int arr[10]={1,2,3,4,56,71};
     int size=sizeof(arr)/sizeof(int);
     int element=4;
     int index=binarysearch(arr,size,element);
     display(arr,size);
     printf("element %d is present at index %d.",element,index );
 }
