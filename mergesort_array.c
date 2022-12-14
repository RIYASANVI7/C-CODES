 #include<stdio.h>
 void printarray(int arr[],int n){
     printf("array elements are:");
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     printf("\n");
 }
 void merge(int arr[],int low,int mid,int high){
     int b[high+low-1];
     int i,j,k;
     i=low,j=mid+1,k=low;
     while(i<=mid&&j<=high){
         if(arr[i]<arr[j]){
             b[k]=arr[i];
             k++;
             i++;
         }
         else{
             b[k]=arr[j];
             k++;
             j++;
         }
     }
     while(i<=mid){
         b[k]=arr[i];
             k++;
             i++;
     }
     while(j<=mid){
         b[k]=arr[j];
             k++;
             j++;
     }
     for(int i=low;i<=high;i++){
         arr[i]=b[i];
     }
 }
 void mergesort(int arr[],int low,int high){
     int mid;
     if(low<high){
         mid=(low+high)/2;
         mergesort(arr,low,mid);
         mergesort(arr,mid+1,high);
         merge(arr,low,mid,high);
     }
 }
 int main(){
     int arr[]={9,1,4,14,4,15,6};
     printarray(arr,7);
     mergesort(arr,0,6);
     printarray(arr,7);
 }