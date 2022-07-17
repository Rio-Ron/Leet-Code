#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define un_map unordered_map
#define un_set unordered_set

void print_vector(vector<int>& v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<' ';
    cout<<endl;
}
void Print_map_with_one_value(map<int, int>& mp){
    for(auto it = mp.begin(); it!= mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
}
void pn(int n= INT_MIN , string name = "Variable"){
    if(n == INT_MIN) cout<<"----------------------------------------\n";
    else cout<<"Value of "<<name<<" is "<<n<<endl;
}
bool isPalindrome(string s) {
    int len = s.size();
    len--;
    int l = 0,r = len;
    while ( l < r ){
        while(!isalnum(s[l]) && l < r){
            l++;
        }
        while(!isalnum(s[r]) && r > l){
            r--;
        }
        if(tolower(s[l]) != tolower(s[r])) return false;
        l++,r--;
    }
    return true;
}

int main(){

    //cout<<isPalindrome("")<<endl;

    
    return 0;
}