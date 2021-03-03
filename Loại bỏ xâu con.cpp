#include <bits/stdc++.h>

using namespace std;
int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    char p[100];
    string arr[100];
    int i = 0;
    stringstream ss;
    ss<<a;
    while(ss>>p)
    {
        arr[i++] = p;
    }
    for(int j = 0; j < i; j++)
    {
        if(arr[j].compare(b) != 0)
        cout<<arr[j]<<" ";
    }
}