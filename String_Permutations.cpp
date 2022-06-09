/*
Problem Statement
You are given an input string 'S'. Your task is to find and return all possible permutations of the input string.
Note:
1. The input string may contain the same characters, so there will also be the same permutations.

2. The order of permutation does not matter.

Sample Input 1:
cba
Sample Output 1:
abc
acb
bac
bca
cab
cba

*/
#include <bits/stdc++.h> 
using namespace std;
void permute(string &input,int index,vector<string> &ans){
    if(input.size()==index){
        ans.push_back(input);
        return;
    }
    for(int i=index;i<input.size();i++){
        swap(input[i],input[index]);
        permute(input,index+1,ans);
        swap(input[i],input[index]);
    }
}
vector<string> findPermutations(string &s) {
       vector<string> ans;
       permute(s,0,ans);
    return ans;
}