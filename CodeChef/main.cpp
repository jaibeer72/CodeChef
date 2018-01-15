#include<iostream>

using namespace std; 
// so here is the thing we can use binarry search but it needs to be an ordered list 
// so first sorting and then solving is a good idea 

int main() {
	// input setup 
		// variables
	int T;
	
	//input 
	//cout << "\n enter the number of rects to check ";
	cin >> T;
	auto rect = new int[T][4]; 
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> rect[i][j];
		}
	}
	cout << "\n"; 
	//Bubble sort
	for (int no = 0; no < T; no++)
	{
		//it actually starts here making the time taken increased bt n^3 but... well
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4 - i - 1; j++)
			{
				if (rect[no][j] > rect[no][j + 1]) {
					
					//the swapping 

					int temp = rect[no][j]; 
					rect[no][j] = rect[no][j + 1];
					rect[no][j + 1] = temp; 
				}
			}
		}
	}
	//now for debugging lets print it 
	/*for (int no = 0; no < T; no++)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << " " << rect[no][i]; 
		}
		cout << "\n "; 
	}*/
	//Now binarry search wait no ...
	//wait its sorted from low to high if 1 =2 and 3=4 its a rectangle 

	for (int no = 0; no < T; no++)
	{
		if ((rect[no][0] == rect[no][1]) && (rect[no][2] == rect[no][3])&&(rect[no][1]!= rect[no][2])) {
			cout << "\n Yes"; 
		}
		else {
			cout << "\n No"; 
		}
	}
	cout << "\n"; 
	system("pause"); 
	return 0; 
}
