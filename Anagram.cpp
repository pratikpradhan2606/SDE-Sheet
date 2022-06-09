/*
Check Permutation

Problem Statement
You have been given two strings 'STR1' and 'STR2'. You have to check whether the two strings are anagram to each other or not.
Note:
Two strings are said to be anagram if they contain the same characters, irrespective of the order of the characters.
Example :
If 'STR1' = “listen” and 'STR2' = “silent” then the output will be 1.

Both the strings contain the same set of characters.
*/

#include <bits/stdc++.h> 
using namespace std;

bool areAnagram(string &str1, string &str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int i=0;
    int j=0;
    if(str1.size()!=str2.size())return false;
    while(i<str1.size() && j<str2.size()){
        if(str1[i]!=str2[j])return false;
        i++;j++;
    }
    return true;
}
int main(){
    string str1="Hello",str2="Hello";
    cout<<areAnagram(str1,str2);
    return 0;
}