#include <bits/stdc++.h>
using namespace std;

int t, k;
string s;
void nhap(){
    cin>>s;
    cin>>k;
}
int in(){
    sort(s.begin(), s.end());
    int dem = 1;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != s[i+1])
        dem++;
    }
    if(s.size() < 26)
        return 0;
    if(dem+k >= 26)
        return 1;
    return 0;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        nhap();
        cout<<in()<<endl;
    }
}