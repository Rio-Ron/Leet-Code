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
    int len = s.size(),z = 0;
    len--;


    for(int i=0;i<=len;){
        if(isdigit(s[i])){
            if(isdigit(s[len])){ 
                if( (s[i]) != s[len] ) return false;
                else i++,len--;
            }
            else if(isalpha(s[len])) return false;
            else len--;
        }
        else if(isalpha(s[i])){
            if(isalpha(s[len])){
                if(tolower(s[i]) != tolower(s[len])) return false;
                else i++,len--;
            }
            else if(isdigit(s[len])) return false;
            else len--;
        }
        else i++;
    }
    return true;
}


int main(){

    //cout<<isPalindrome("a")<<endl;

    return 0;
}