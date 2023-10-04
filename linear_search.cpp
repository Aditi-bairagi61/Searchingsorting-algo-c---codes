#include<iostream>
using namespace std;
int main()
{
    int a[3],n,i,index;
    cout<<"Enter the array elements:";
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array elements are:";
    for(i=0;i<3;i++)
    {
        cout<<"\n"<<a[i]<<"\n";
    }
    cout<<"Which element from above array you want to search:";
    cin>>n;
    for(i=0;i<3;i++)
    {
        if(a[i]==n)
        {
            cout<<"element is found"<<"\n";
            index=i;
            break;
        }
     
    }
    cout<<"Your serach element is found in:"<<""<<index <<" "<<"location";
    return 0;
}