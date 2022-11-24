#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"enter a number";
    cin>>n;
    int org_num=n;
    while(n>0)
    {
       // i=n%10;
        //r=i*i*i;
        //a=a+r;
        //n=n/10;
       i=i*n;
       n=n-1; 
    }
    //if(org_num==a)
    //{
      //  cout<<"armstrong number";
    //}
    //else
    //{
      //  cout<<"not a armstrong number";
    //}
    cout<<i;
    return 0;
}