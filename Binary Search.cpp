#include<iostream>
using namespace std;
int main()
{
    int a[10],low=0,high,mid,i,size,key;
    cout<<"Enter the size of array elements:";
    cin>>size;
    cout<<"Enter"<<" "<<size<<" "<<"Elements""\n";
    high=size-1;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array is:";
     for(i=0;i<size;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"Which key you want to search:";
    cin>>key;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            cout<<"Element is found at middle"<<"" <<mid+1;
            exit(0);
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else{
            cout<<"number is not found";
        }
       
    }

    
    return 0;
}