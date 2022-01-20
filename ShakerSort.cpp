#include <iostream>
#include <vector>
using namespace std;

//Execution time O(n^2) - Gets closer to O(n) than other sorting algorithms - Could be O(kn) if the position of every element differs in K, with K >= 1
//Extra memory cost O(1)
//Declare a template to make the algorithm generic
template <class T>
void shakerSort(vector<T>& v){
	int i, j, k; 
	for(i = 0; i < v.size(); i++){
		//Checking from left to right
		for(j = i + 1; j < v.size(); j++){
			if(v[j] < v[j-1]){
				//Swapping if the condition is met
				T aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;	
			};
		};
		//Checking from right to left
		for(k = (v.size()-1); k > i; k--){
			if(v[k] < v[k-1]){
				//Swapping if the condition is met
				T aux = v[k];
				v[k] = v[k-1];
				v[k-1] = aux;	
			};
		};
	};
};
