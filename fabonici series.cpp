#include<iostream>
using namespace std ;
int main()
{
int n;
int a=0; int b=1;
cout<<"please enter the fabonici number"<<endl;
cin>>n;
cout<< a <<" " << b<< " ";
for (int i = 1; i <= n; i++)
{
int next = a+b;
cout<<next<<endl;
a=b;
b = next;
}

}