#include <bits/stdc++.h>
using namespace std;

int n;
string a;
void nhap(){
    cin>>a;
}
void in(){
    long long sum = 0, sum1 = 0, b[10000], j = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if((a[i] >= '0' && a[i] <='9') &&(a[i+1] >= '0' && a[i+1] <='9'))
        {
            sum1 = sum1*10+(a[i]-'0');
        }
        else if((a[i] >= '0' && a[i] <='9') &&(a[i-1] >= '0' && a[i-1] <='9'))
        {
            sum1 = sum1*10+(a[i]-'0');
        }
        else if(a[i] >= '0' && a[i] <='9')
        {
            sum = a[i]-'0';
            b[j++] = sum;
        }
        else if(sum1 != 0)
        {
            b[j++] = sum1;
            sum1 = 0;
        }
    }
    b[j++] = sum1;
    sum = 0;
    for(long long i = 0; i < j; i++)
    {
        sum +=b[i];
    }
    cout<<sum<<endl;
}
int main(){
    cin>>n;
    cin.ignore();
    while(n--)
    {
        nhap();
        in();
    }
}