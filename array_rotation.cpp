#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//method---> using temp for first element and shifting array elements to left

int* rotate_array_left(int arr[], int size, int num_of_rotation){
	int temp, i;
	for(int out = 0; out < num_of_rotation; out++){
		temp = arr[0];
			for(i = 0; i < size - 1; i++){
				arr[i] = arr[i + 1]; // left shift
			}
		arr[i] = temp;
	}
	return arr;
}

void print(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main(){
	int arr[7] = {1, 2, 3, 4, 5, 6, 10};
	
	//rotate_array_left(arr, 7, 1);// 2 3 4 5 6 7 1

	cout << "array -> ";
	print(arr, 7);//1 2 3 4 5 6 7

	cout << "left shift -> ";
	print(rotate_array_left(arr, 7, 2), 7);   
	return 0;
}
