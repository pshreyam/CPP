#include <iostream>
#include <math.h>
using namespace std;

void data_swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void insertionSort(int a[],int n)
{
    for (int j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while (i>=0 and a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}

void selectionSort(int a[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if (a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        data_swap(a[i],a[min_index]);
    }
}

bool binarySearch(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=floor((low+high)/2);
        if (a[mid]==key)
        {
            cout<<"Data found : "<<key<<" at index : "<<mid<<endl;
            return true;
        }
        else if (key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<"Data not found : "<<key<<endl;
    return false;
}


int main()
{
    int a[]={1,9,10,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<endl<<"Data: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    selectionSort(a,n);
    cout<<endl<<"Data: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    for (int i=1;i<=10;i++)
    {
        binarySearch(a,n,i);
    }
    return 0;
}
