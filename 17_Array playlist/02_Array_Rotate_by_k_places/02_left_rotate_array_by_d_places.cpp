// Left rotate an array by 1 place 
/*
eg : ip: arr[] = [1,2,3,4,5,6,7]
     when d = 2
     op: arr[] = [3,4,5,6,7,1,2]

eg 2: ip: arr[] = [1,2,3,4,5,6,7]
     when d = 3
     op: arr[] = [4,5,6,7,1,2,3]
    
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //This is input section
    int n;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //logic:
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    //output :
    cout<<"\nArray after 1 rotation :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}