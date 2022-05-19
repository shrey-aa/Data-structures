#include <iostream>
using namespace std;

int peakindex(int arr[],int size)
{
    int start=0 , end = size-1;
    int mid=start+(end-start)/2;
    
    while(start<end){
    if(arr[mid]>arr[mid+1]){
        end=mid;
    }    
    else if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
     mid=start+(end-start)/2;
    }
    return mid;
}

int main()
{
   int arr[]={1,2,4,6,8,5,3,1};
   int size=8;
    int pindex;
    pindex=peakindex(arr,8);
    cout<<"peak index found at:"<<pindex<<"\thaving value:"<<arr[pindex];
    return 0;
}