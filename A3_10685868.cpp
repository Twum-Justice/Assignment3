#include <iostream>

#include <cstdlib>

using namespace std;

int main(int argc, char ** argv)

{
	int score;
	cout << " Please Enter Your Exam Score " << endl;
	cin >> score;
	
	if( score >= 80 && score <= 100)
	cout << " A " << endl;
	
	else if( score >= 75 && score <= 79)
	cout << " B+ " << endl;
	
	else if( score >= 70 && score <= 74)
	cout << " B " << endl;
	
	else if ( score >= 65 && score <= 69)
	cout << " C+ " << endl;
	
	else if ( score >= 60 && score <= 64)
	cout << " C " << endl;
	
	else if ( score >= 55 && score <= 59)
	cout << " D+ " << endl;
	
	else if (score >= 50 && score <= 54)
	cout << " D " << endl;
	
	else if ( score >= 45 && score <= 49)
	cout << " E " << endl;
	
	else if ( score >= 0 && score <= 44)
	cout << " F " << endl;
	
	else cout << " invalid exam score" << endl;
	
	system ( " pause\n"); 
	
	return 0;
}
