#include <iostream>
#include "SelectionSort.cpp"
#include "InsertionSort.cpp"
#include "BubbleSort.cpp"
#include "ShakerSort.cpp"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	vector<int> v;
	for(int i = 0; i < 10; i++){
		v.push_back(rand() % 25);
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << "\n";	
	//selectionSort(v);
	//insertionSort(v);
	//bubbleSort(v);
	shakerSort(v);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}
