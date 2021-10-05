#include <iostream>
#include <map>
#include <utility>
#include <climits>
using namespace std;

pair <char,int> find_min(map<char,int>&m){
    pair<char, int> min_pair = {'a',INT_MAX};
    for(auto i:m){
        if(min_pair.second>i.second){
            min_pair.first = i.first;
            min_pair.second = i.second;
        }
    }
    return min_pair;
}

int longest_substring(string str, int k){
    int start=-1,max_len=0;
    map <char,int> m;
    for(int i=0;i<str.length();i++){
        m[str[i]]=i;
        if(m.size()>k){
            pair<char,int> min_pair;
            min_pair = find_min(m);
            start = min_pair.second;
            m.erase(min_pair.first);
        }
        max_len = max(max_len,i-start);
    }
    return max_len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string str;
        cin>>k;
        cin>>str;
        cout<<longest_substring(str,k)<<endl;
    }
    return 0;
}