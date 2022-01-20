#include <iostream>
#include <vector>
using namespace std;

template <class T>
void insertionSort(vector<T>& v){
	for(int i = 2;i< v.size();++i){
		T next = v[i];
		int j = i;
		while(j>0 && next < v[j-1]){
			v[j] = v[j-1];
			j = j-1;
		}
		v[j] = next;
	}
};
