#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end = size-1;
    int mid=(start+end)/2;
    
    while(start<=end){
        
        if(arr[mid]==key)
        {   
            return mid;}
        else if (arr[mid]<key)
        {start=mid+1;}
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}

int main()
{
   int arr[]={19,23,29,36,49,57,69,71,79,86,99};
   int size=11;
   int key;
   cout<<"enter key:\n";
   cin>>key;
    int index;
    index=binarysearch(arr,11,key);
    cout<<"key found at:"<<index+1;
    return 0;
}