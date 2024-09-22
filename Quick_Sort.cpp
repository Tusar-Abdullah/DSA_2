
///QUICK SORT

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int lb,int up)
{

    int pivot = arr[lb];
    int start = lb;
    int end = up;

    while(start<end)
        {

            while(arr[start] <= pivot) start++;
            while(arr[end] > pivot) end--;

            if(start < end) swap(arr[start],arr[end]);
        }
    swap(arr[lb],arr[end]);
    return end;

}


void QuickSort(int arr[],int lb,int up)
{

    if(lb<up)
        {
            int loc = partition(arr,lb,up);
            QuickSort(arr,lb,loc-1);
            QuickSort(arr,loc+1,up);
        }

}



void print(int arr[],int n)
{

    for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}

int main()
{

    int arr[] = {4,3,5,6,7,1,2,9,10,44,22,33,55,-1,-9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"ARRAY BEFORE SORTED : "<<endl;
    print(arr,n);

    QuickSort(arr,0,n-1);

    cout<<"ARRAY AFTER SORTED : "<<endl;
    print(arr,n);

}

