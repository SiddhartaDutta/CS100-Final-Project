#include <iostream>
#include "GenericTask.hpp"

using namespace std;

void GenericTask::printAllInfo(){
	cout << "test \n";
}

void GenericTask::editTask(){
	cout <<"task edited\n";
}

string GenericTask::getDesciption(){
	return description;
}

void GenericTask::setDescription() {
	cout <<"Description set\n";
}


