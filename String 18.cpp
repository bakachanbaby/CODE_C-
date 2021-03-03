#include<bits/stdc++.h>
using namespace std;
int t, dem = 0;
string s;
int ShowBit(string s){
    for(int i = 0; i < s.size() - 2; i++){
        char t1 = s.at(i);
        char t2 = s.at(i+1);
        char t3 = s.at(i+2);
        if( t1 == '1' && t2 == '0' && t3 == '0' ){
            s.erase( s.begin() + i, s.begin() + i + 3 );
            dem += 3;
            int tmp = s.size();
            if( tmp < 3 ) return dem; 
        }
    }
    return ShowBit(s);
}
int main(){
    cin >>t;
    while(t--){
        cin.ignore();
        cin>>s;
        cout<<ShowBit(s)<<endl;
    }
    return 0;
}   