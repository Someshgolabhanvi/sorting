
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    //Desending Order
    // int arr[6]={1,4,2,6,8,10};
    // for(int i=0;i<5;i++)
    // {
    //     int index=i;
    //     for(int j=i+1;j<6;j++)
    //     {
    //         if(arr[j]>arr[index])
    //         {
    //             index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0;i<6;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    //assending order
    int arr[6]={1,4,2,6,8,10};
    for(int i=0;i<5;i++)
    {
        int index=i;
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}