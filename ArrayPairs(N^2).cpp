#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[],int n)
{

   for(int i=0;i<n;i++)
   {

       for(int j=0;j<n;j++)
       {
        cout<<" ("<<arr[i]<<","<<arr[j]<<"), ";

       }
       cout<<endl;
   }




}


int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int n =sizeof(arr)/sizeof(int);

   subArray(arr,n);



    return  0;
}
