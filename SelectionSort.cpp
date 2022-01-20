#include <iostream>
#include <vector>
using namespace std;

//Execution time O(n^2) - O(n) if it's already sorted.
//Extra memory cost O(1)
//Declare a template to make the algorithm generic
template <class T>
//The algorithm takes the reference of a vector of any size. Selection sort is not recomended for long vectors.
void selectionSort(vector<T>& v){
	for(int i = 0; i < v.size() - 1; ++i){
		int min = i; //Minimum value
		for(int j = i + 1; j < v.size(); ++j){
			if(v[min] > v[j])//Checks the values of the vector on i and i+1
				min = j;
		}
		//Swaps the position of the values.
		T aux = v[i];
		v[i] = v[min];
		v[min] = aux;
	}
};
