#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//right shift for(3) "1, 2, 3, 4, 5, 6, 7" -> "5, 6, 7, 1, 2, 3, 4" 
//first method---> using temp for latest value and shifting array elements to right
int* rotate_array_right(int arr[], int size, int num_of_rotation){
	int temp, i;
	for(int out = 0; out < num_of_rotation; out++){
		temp = arr[size - 1];
			for(i = size - 1; i >= 0; i--){
				arr[i + 1] = arr[i]; // right shift 
			}
		arr[i + 1] = temp;
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
	
	//rotate_array_right(arr, 7, 1);// 7 1 2 3 4 5 6

	cout << "array -> ";
	print(arr, 7);//1 2 3 4 5 6 7 

	cout << "right shift -> ";
	print(rotate_array_right(arr, 7, 2), 7); 