#include<iostream>

using namespace std;

void swap(int &,int &);

int main()
{
  int a,b;  //a,b are the numbers to be swapped
  cout<<"Enter the two numbers to be swapped:\n";
  cin>>a>>b;
  cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
  swap(a,b);
  cout<<"The numbers after swapping are:\n";
  cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
  cin.get();
  return 0;
}

void swap(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
}
