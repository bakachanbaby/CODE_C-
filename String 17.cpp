#include <bits/stdc++.h>
using namespace std;

int t;
string s;
void in(){
    int dem = 0;
    for(int i = 0; i < s.size(); i++)
    {
        dem = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[i] == s[j])
            dem++;
        }
        if(dem == 1)
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        in();
    }
}