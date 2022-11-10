#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[],int p[],int n)
{


   int sum=0,Maxsum=0;

   for(int i=0;i<n;i++)
   {
      sum +=arr[i];
      if(sum<0)
      {
          sum=0;
      }
      if(Maxsum<sum)
      {
          Maxsum=sum;
      }
   }


return Maxsum;

}


int main()
{
   int arr[]={-2,3,4,-1,5,-12,6,1,3};
   int n =sizeof(arr)/sizeof(int);
   int p[n]={0};

  cout<<subArraySum(arr,p,n);



    return  0;
}


