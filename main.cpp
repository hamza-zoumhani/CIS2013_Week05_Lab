#include <iostream>
#include <string>
using namespace std;

int main(){
	
	const int MAX=30;
	int LEN;
	
	cout << "How many students are in this class: " ;
	cin >> LEN;
	
	int student[MAX];
	string name[MAX];
	
	
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