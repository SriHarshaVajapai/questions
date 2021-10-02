#include <bits/stdc++.h>
using namespace std;

int longest;
map <string,int> memo;

int longest_and_seq(int *arr,int start, int end);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++) arr[i]=i;
        longest=1;
        longest_and_seq(arr,1,n);
        cout<<longest<<"\n";
    }
    return 0;
}

int longest_and_seq(int *arr, int start, int end){
    string mem = to_string(start) + to_string(end);
    // cout<<mem<<"\n";
    if(memo.find(mem) != memo.end()){
        int present_len = (end-start)+1;
        if(memo[mem]>0 && longest<present_len){
            longest=(end-start)+1;
        }
        return memo[mem];
    }
    if(start==end) return arr[start];
    else{
        int right = longest_and_seq(arr,start+1,end);
        int left = longest_and_seq(arr,start,end-1);
        int bitAnd = right & left;
        int present_len = (end-start)+1;
        if(bitAnd>0 && longest<present_len){
            longest=(end-start)+1;
        }
        memo[mem] = bitAnd;
        return memo[mem];
    }
}