#include <bits/stdc++.h>

void helper(vector<vector<int>> &matrix, pair<int, int> p){
	//making column zero
	for(int i=0; i < matrix.size(); i++){
		matrix[i][p.second]=0;
	}
	for(int j=0; j < matrix[0].size(); j++){
		matrix[p.first][j]=0;
	}
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<pair<int, int>> idxs;
	for(int i=0; i < matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if(matrix[i][j]==0){
				idxs.push_back({i,j});
			}
		}
	}
	for(auto it : idxs){
		helper(matrix, it);
	}
}