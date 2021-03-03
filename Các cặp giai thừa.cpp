#include <bits/stdc++.h>
using namespace std;

int t, n;
string a;
void in(){
    int arr[11];
    for(int i = 0; i < 11; i++)
        arr[i] = 0;
    for(int i = 0; i < n; i++)
    {
        switch(a[i])
        {
            case '2':
            {
                arr[2]++;
                break;
            }
            case '3':
            {
                arr[3]++;
                break;
            }
            case '4':
            {
                arr[3]++;
                arr[2]+=2;
                break;
            }
            case '5':
            {
                arr[5]++;
                break;
            }
            case '6':
            {
                arr[5]++;
                arr[3]++;
                break;
            }
            case '7':
            {
                arr[7]++;
                break;
            }
            case '8':
            {
                arr[7]++;
                arr[2]+=3;
                break;
            }
            case '9':
            {
                arr[7]++;
                arr[3]+=2;
                arr[2]++;
                break;
            }
        }
    }
    for(int i = 10; i >= 0; i--)
    {
        while(arr[i]--)
        {
            cout<<i;

        }
    }
    cout<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n;
        cin>>a;
        in();
    }
}