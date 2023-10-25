#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"write the counting number";
    cin>>n;
    int sum =0;
    /*for (int i = 0; i < n; i++)
    {
        cout<<i<<endl;
    
    }*/
for (int i = 0; i <= n; i++)
{
 sum = sum+i;
}
cout<<sum<<endl;        
}