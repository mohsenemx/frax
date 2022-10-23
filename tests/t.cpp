// t.cpp is used for rnd()  function in frax.h

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{
    srand(time(NULL));
    int min,max;
    min = 1;
    max = 9999999;
    cout << time(0) << endl;
    // cin >> min >> max;
    for (int i = 1; i < 50; i++) {
	int randNum = rand()%(max-min + 1) + min;
    cout << randNum << endl;
	return 0; 
    }
}