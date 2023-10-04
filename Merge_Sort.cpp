#include<iostream>
using namespace std;
int main()
{
    int a[10],mid,low=0,high,i,size;
    cout<<"Enter size of array:";
    cin>>size;
    cout<<"\n Enter"<<" "<<size<<" "<<"elements:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Your array is:";
    for(i=0;i<size;i++)
    {
        cout<<"\n"<<a[i];
    }
    high=size-1;
    mergesort(low,high)
    {
        if(low<high)
        {
            mid=(low+high)/2;
            mergesort(low,mid);
            mergesort(mid+1,high);
            mergesort(low,mid,high);
        }
    }
    return 0;
}