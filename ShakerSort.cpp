#include <iostream>
#include <vector>
using namespace std;

template <class T>
void shakerSort(vector<T>& v){
	int i, j, k;
	for(i = 0; i < v.size(); i++){
		//--------------------
		for(j = i + 1; j < v.size(); j++){
			if(v[j] < v[j-1]){
				//Swapping
				T aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;	
			};
		};
		for(k = (v.size()-1); k > i; k--){
			if(v[k] < v[k-1]){
				//Swapping
				T aux = v[k];
				v[k] = v[k-1];
				v[k-1] = aux;	
			};
		};
	};
};
