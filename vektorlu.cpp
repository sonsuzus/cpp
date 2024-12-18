#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> v;

int main()
{
    int n,i;
    cin>>n;
    v.push_back(n);
    v.push_back(6);
    v.push_back(7);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"Size: "<<v.size()<<"Kapasite: "<<v.capacity()<<endl;
}