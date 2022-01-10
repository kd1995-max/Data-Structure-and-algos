#include<bits/stdc++.h>
using namespace std;

//merge function of two sorted array

void merge(int arr[],int arr1[], int res[], int n, int m)
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[j]<arr[i])
        {
            res[k]=arr1[j];
            j++;
        }
        else
        {
            res[k]=arr[i];
            i++;
        }
        k++;
    }
    while(i<n)
    {
        res[k]=arr[i];
        i++;
        k++;
    }
    while(j<m)
    {
        res[k]=arr1[j];
        j++;
        k++;
    }
}

int main(int argc, char const *argv[])
{
    //define an array
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //define second array
    int arr2[] = {11,12,13,14,15,16,17,18,19,20};

    //size of array
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    //define result array
    int res[n+m];

    //call merge function
    merge(arr,arr2,res,n,m);

    //print result array
    for(int i=0;i<n+m;i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}


