#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number  :";
    cin>>n;
    bool a =1;
    for (int i = 2; i < n; i++)
    {
    if (n%i==0){
         a=0;
        break;
    }
    }
    if (a==1)
    {
        cout<<"number is prime";
    }
    else 
    { 
               cout<<"not a prime";
          }
    
}