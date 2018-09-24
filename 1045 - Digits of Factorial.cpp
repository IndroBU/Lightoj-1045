///God will help me...
#include<bits/stdc++.h>
using namespace std;
long  double Log[1000000];
long double f(int n)
{
    long double x;
    x=log10(n);
    return x;
}
int main()
{
    Log[1]=0.0;
    for(int i=2; i<=1000000; i++)
    {
        Log[i]=Log[i-1]+f(i);

    }
    int t,n,b,cas;
    cin>>t;
    long double x;
    for(cas=1; cas<=t; cas++)
    {
        cin>>n>>b;
        //cout<<Log[n]<<endl;
        x=(Log[n])/log10(b);
        if(n<=1)
        {
            cout<<"Case "<<cas<<": "<<1<<endl;
        }
        else
        {
            long long int a=floor(x)+1;
           cout<<"Case "<<cas<<": "<<a<<endl;
        }


    }
    return 0;
}
