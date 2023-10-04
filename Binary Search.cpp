#include<iostream>
using namespace std;
int main()
{
    int a[10],low,high,mid,i,size;
    cout<<"Enter the size of array elements:";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}