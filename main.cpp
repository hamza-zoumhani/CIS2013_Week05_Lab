#include <iostream>

using namespace std;

int main(){
	
	const int len=3;
	
	// List of student in our class:
	int student[len];
	
	
	for(int i=0; i<len; i++){
		cout << "Enter Student " << i+1 << "'s grade: ";
		cin >> student[i];
	}
	
	for(int j=0; j<len; j++){
		cout << "Student " << j+1 << "'s grade is " << student[j] << endl;
		
	}
	
	
	return 0;
}