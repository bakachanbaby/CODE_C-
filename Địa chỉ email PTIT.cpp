#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    getline(cin, a);
    int c = a.size();
    for(int i = 0; i < c; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i]+=32;
    }
    char x[100];
    string y[100];
    int i = 0;
    stringstream ss;
    ss<<a;
    while(ss>>x)
    y[i++] = x;
    cout<<y[i-1];
    for(int j = 0; j < i-1; j++)
        cout<<y[j].at(0);
    cout<<"@ptit.edu.vn";
}