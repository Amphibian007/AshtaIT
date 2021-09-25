#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    int e,f;
    cin>>a>>b>>c>>d>>e>>f;
    double an=0;
    for(int i=e-1; i<e+f-1; i++)
    {
        if(i%60<=14) an+=a;
        else if(i%60<=29) an+=b;
        else if(i%60<=44) an+=c;
        else an+=d;
    }
    cout<<an<<endl;
    return 0;
}
