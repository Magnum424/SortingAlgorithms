#include <iostream>
#include <vector>
using namespace std;

//Execution time O(n^2) - O(n^2) if it's already sorted.
//Extra memory cost O(1)
//Declare a template to make the algorithm generic
template <class T>
//The algorithm takes the reference of a vector of any size.
void bubbleSort(vector<T>& v){
	for(int i = 1; i < v.size(); ++i){
		for(int j = 0; j < (v.size() - i); j++){
			//Check if the value to the right is higher than the one on the left and swap their positions.
			if(v[j] > v[j+1]){
				T aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
};
