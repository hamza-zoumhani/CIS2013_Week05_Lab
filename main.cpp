#include <iostream>

using namespace std;

int main(){
	
	const int LEN=3;
	
	// List of student in our class:
	int student[LEN];
	
	
	for(int i=0; i<LEN; i++){
		cout << "Enter Student " << i+1 << "'s grade: ";
		cin >> student[i];
	}
	
	for(int j=0; j<LEN; j++){
		cout << "Student " << j+1 << "'s grade is " << student[j] << endl;
		
	}
	
	
	return 0;
}