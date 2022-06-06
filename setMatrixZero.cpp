/*
Set Matrix Zero
Problem Statement
Given an ‘N’ x ‘M’ integer matrix, if an element is 0, set its entire row and column to 0's, and return the matrix. In particular, your task is to modify it in such a way that if a cell has a value 0 (matrix[i][j] == 0), then all the cells of the ith row and jth column should be changed to 0.
You must do it in place.
For Example:
If the given grid is this:
[7, 19, 3]
[4, 21, 0]

Then the modified grid will be:
[7, 19, 0]
[0, 0,  0]


*/

#include<bits/stdc++.h>
using namespace std;
void setZero(vector<vector<int>> &matrix){
	int row=matrix.size();
	int col=matrix[0].size();
	//brute force
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<col;j++){
	// 		if(matrix[i][j]==0){
	// 			int k=0;
	// 			int temp=i;

	// 			while(k<row){
	// 				matrix[temp][k]=-1;
	// 				k++;
	// 			}
	// 			k=0;
	// 			temp=j;
	// 			while(k<col){
	// 				matrix[k][temp]=-1;
	// 				k++;
	// 			}

	// 		}
	// 	}
	// }
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<col;j++){
	// 		if(matrix[i][j]==-1){
	// 			matrix[i][j]=0;
	// 		}
	// 	}
	// }
	//efficient
	vector<int> row_vec(row);
	vector<int> col_vec(col);

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(matrix[i][j]==0){
				row_vec[i]=-1;
				col_vec[j]=-1;
			}
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(col_vec[j]==-1 || row_vec[i]==-1){
				matrix[i][j]=0;
			}
		}
	}
}
void print(vector<vector<int>> v,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int row=3;
	int col=3;
	vector<vector<int>> vec(row,vector<int>(col));
	for(int i=0;i<row;i++){
		//vec[i] = vector<int>(col);
		for(int j=0;j<col;j++){
			cin>>vec[i][j];
		}
	}
	setZero(vec);
	print(vec,row,col);
	return 0;
}