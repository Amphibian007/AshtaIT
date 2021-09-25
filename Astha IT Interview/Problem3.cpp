#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    map<string,string>m;
    for(int i=0;i<a;i++)
    {
       string x,y;
       cin>>x;
       getchar();
       getline(cin,y);
       m[x]=y;
    }
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
       if(m.find(word)==m.end())
       {
          cout<<word<<' ';
       }
       else
       {
          cout<<m[word]<<' ';
       }
    }
    cout<<endl;
    return 0;
}
