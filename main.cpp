#include <iostream>
#include <string>
using namespace std;

int main(){
	
	const int LEN=2;
	
	int student[LEN];
	string name[LEN];
	
	
	for(int i=0; i<LEN; i++){
		cout << "Enter Student " << i+1 << "'s name: ";
		cin >> name[i];
		cout << "Enter " << name[i] << "'s grade: ";
		cin >> student[i];
	}
	
	for(int j=0; j<LEN; j++){
	cout << name[j] << "'s grade is " << student[j] << endl;
		
	}
	
	
	return 0;
}