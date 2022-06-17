#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	
    int curr_ele=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=curr_ele)
            count--;
        else
            count++;
        
        if(count==0){
            curr_ele=arr[i];
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==curr_ele){
            count++;
        }
    }
    if(count>n/2){
        return curr_ele;
    }
    return -1;
}