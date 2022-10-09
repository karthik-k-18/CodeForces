#include<bits/stdc++.h>

using namespace std;
#define ll long long

int check(string s){
    for(int i=0;i<2;i++){
        if(s[i]!=s[4-i]){
            return 0;
        }
    }
    return 1;
}

string modify(int ch,int cm){
    int count=0;
    string s1,s2,s;
    while(ch!=0){
        s1+=(ch%10)+48;
        ch/=10;
    }
    if(s1.length()==1){
        s1.push_back('0');
    }
    else if(s1.length()==0){
        s1.push_back('0');
        s1.push_back('0');
    }
    reverse(s1.begin(),s1.end());
    s+=s1;
    s.push_back(':');
    while(cm!=0){
        s2+=(cm%10)+48;
        cm/=10;
    }
    if(s2.length()==1){
        s2.push_back('0');
    }
    else if(s2.length()==0){
        s2.push_back('0');
        s2.push_back('0');
    }
    reverse(s2.begin(),s2.end());
    s+=s2;
    return s;
}

void TestCase() {
    string s;
    int x,count=0;
    int hour=0,minute=0;
    cin>>s>>x;
    int a=x/60,b=x%60;
    string s1=s.substr(0,2);
    string s2=s.substr(3,2);
    hour+=(s1[1]-'0');
    hour+=((s1[0]-'0')*10);
    minute+=(s2[1]-'0');
    minute+=((s2[0]-'0')*10);
    string cur;
    int ch,cm;
    while(cur!=s){
        cm=minute+b;
        if(cm>59){
            cm=cm%60;
            ch=(hour+a+1)%24;
        }else{
            cm=cm%60;
            ch=(hour+a)%24;
        }
        cur=modify(ch,cm);
        count+=check(cur);
        minute=cm;
        hour=ch;
    }
    cout<<count<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        TestCase();
    }
    return 0;
}