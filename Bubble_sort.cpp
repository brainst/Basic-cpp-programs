#include <iostream>

using namespace std;

void main()
{
  int t;
  cout<<"Enter the number of elements in your list:\n";
  cin>>t;
  int ar[t];
  
  cout<<"Enter the numbers of your list:\n";
  
  for(int i=0;i<t;i++)
  {
    cin>>ar[i];
  }
  int j,temp;
  for(int i=0;i<t;i++)
  {
    for(j=0;j<t;j++)
    {
      if(ar[j+1]<ar[j])
      {
        temp=ar[j+1];
        ar[j+1]=ar[j];
        ar[j]=temp;
      }
    }
  }
  cout<<"The list after sorting:\n";
  for(int i=0;i<t;i++)
  {
    cout<<ar[i]<<endl;
  }
  cin.get();
}
