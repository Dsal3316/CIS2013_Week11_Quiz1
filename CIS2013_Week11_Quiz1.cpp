#include <iostream>
#include <cstring>

using namespace std;



int main(){

	int row;
	int *col;
	int *multi_array;


	cout << "Enter number of rows: ";
	cin >> row;
	cout<< endl;

	col = new int[row];
	
   




	

	for (int i=0; i<row; i++){
		int tmp;
		cout << "Number of computers on row " << i << ": ";
		cin >> tmp;
		col[i]=tmp;
		multi_array[i]=new int*[col];
		}

	for (int x=0;x<row;x++){
		cout << "Row " <<x;
		for(int y=0;y<col[x];y++){
			cout << " " << "---";
		}
	cout << endl;
	}		




	return 0;
}
