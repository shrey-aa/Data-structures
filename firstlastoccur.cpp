#include<iostream>
using namespace std;

int firstoccurence(int arr[],int size,int key){
    int start=0, end=size-1;
    int  mid=start+(end-start)/2;
    int ans=-1;
   
    while(start<=end){
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }   
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        }
        return ans;
}

int lastoccurence(int arr[],int size,int key){
     int start=0, end=size-1;
    int  mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }   
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        }
        return ans;
}

int main()
{
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5};
    int fo=firstoccurence(arr,12,3);
    int lo=lastoccurence(arr,12,3);
    cout<<"first occurence of 3 is at:"<<fo ;
    cout<<"\nlast occurence of 3 is at:"<< lo;
    cout<<"\nTotal no. of occurences:"<<(lo-fo)+1;
    return 0;
}