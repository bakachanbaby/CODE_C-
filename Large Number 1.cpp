#include <bits/stdc++.h>

using namespace std;

string a, b;
void ss(){
    if(a.size() < b.size())
    swap(a, b);
    if(a.size() == b.size() && b.compare(a) > 0)
    swap(a, b);
}
void in(){
    ss();
    while(a.size() < b.size())
    a = '0'+a;
    while(a.size() > b.size())
    b = '0'+b;
    string meo = "";
    int sotru,sobitru, sodu = 0, flat = 0, tmp;
    for(int i = a.size()-1 ;i >= 0; i--)
    {
        flat = 0;
        sotru = a[i]-'0';
        sobitru = b[i]-'0';
        if(sodu)
        sotru--;
        if(sotru < sobitru)
        {
            sotru+=10;
            flat = 1;
        }
        tmp = (sotru-sobitru);
        meo = (char)(tmp+'0')+meo;
        if(flat == 1)
        sodu = 1;
        else 
        sodu = 0;
    }
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