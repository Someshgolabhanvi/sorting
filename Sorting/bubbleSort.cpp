#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={7,6,4,3,1};
    for(int i=3;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
