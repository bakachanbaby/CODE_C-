#include <bits/stdc++.h>

using namespace std;

string a, b;
void in(){
    string meo = "";
    while(a.size() < b.size())
        a = '0'+a;
    while(b.size() < a.size())
        b = '0'+b;
    int sodu = 0, tmp, socong1, socong2, flat = 0;
    for(int i = a.size()-1; i >= 0; i--)
    {
        flat = 0;
        socong1 = a[i]-'0';
        socong2 = b[i]-'0';
        if(sodu)
        socong1++;
        tmp = socong1+socong2;
        if(tmp >= 10)
        {
            tmp-=10;
            flat = 1;
        }
        meo = (char)(tmp+'0')+meo;
        if(flat)
        sodu = 1;
        else 
        sodu = 0;
    }
    if(sodu)
    meo='1'+meo;
    cout<<meo<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>a>>b;
        in();
    }
}