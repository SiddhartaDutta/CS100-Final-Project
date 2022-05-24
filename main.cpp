#include <iostream>

#include "Tasks/Meeting/Meeting.hpp"

using namespace std;

int main(){

	Meeting* test = new Meeting();

	cout << test->getDate()->getMonth() << endl;

	return 0;

}
