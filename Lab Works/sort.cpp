#include <iostream>
#include <math.h>
using namespace std;

bool binarySearch(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=floor((low+high)/2);
        if (a[mid]==key)
        {
            cout<<"Target found :"<<a[mid]<<endl;
            return 1;
        }
        else if(a[mid]<=key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"Data not found : "<<key<<endl;
    return 0;
}

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    for (int i=1;i<10;i++)
    {
        binarySearch(a,n,i);
    }
}
