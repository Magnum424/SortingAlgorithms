#include <iostream>
#include <vector>
using namespace std;

//Execution time O(n^2) - O(n) if it's already sorted.
//Extra memory cost O(1)
//Declare a template to make the algorithm generic
template <class T>
//The algorithm takes the reference of a vector of any size. Recommended for small arrays
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
