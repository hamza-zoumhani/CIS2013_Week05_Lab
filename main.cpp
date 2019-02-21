#include <iostream>
#include <string>
using namespace std;

const int MAX=30;
int student[MAX];
string name[MAX];

void makesStudent(int x){
	cout << "Enter Student " << x+1 << "'s name: ";
	cin >> name[x];
	cout << "Enter " << name[x] << "'s grade: ";
	cin >> student[x];
	cout << endl;
}

void  printGrade(int y){
	cout << name[y] << "'s grade is " << student[y] << endl;
}

int main(){
	
	int LEN;
	
	cout << "How many students are in this class: " ;
	cin >> LEN;
	cout << endl;
	
	
	for(int i=0; i<LEN; i++){
		makesStudent(i);
	}
	
	for(int j=0; j<LEN; j++){
		printGrade(j);
		
	}
	
	
	return 0;
}