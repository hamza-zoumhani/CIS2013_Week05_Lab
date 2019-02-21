#include <iostream>

using namespace std;

int main(){
	
	// list of student in our class:
	int student[3];
	
	
	for(int i=0; i<3; i++){
		cout << "Enter Student " << i+1 << "'s grade: ",
		cin >> student[i];
	}
	
	
	cout << "Bob grade is: " << student[0] << endl;
	cout << "Tom grade is: " << student[1]<< endl;
	cout << "Jill grade is: " << student[2]<< endl;
	
	return 0;
}