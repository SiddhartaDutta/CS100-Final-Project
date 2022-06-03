#include "Homework.hpp"
#include <iostream>
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"
#include "../ParentTask.hpp"

using namespace std;

void Homework(string Title = "", int month = 0, int day = 0, int year = 0, int DueTimeHour = 0, int DueTimeMin = 0) : ParentTask() {
        
    this->Title = Title;

    Date*DueDate = new Date();
	DueDate->setMonth(month);
	DueDate->setDay(day);
	DueDate->setYear(year);

	Time*DueTime = new Time();
	DueTime->setHour(DueTimeHour);
	DueTime->setMinute(DueTimeMin);

}

void EditDueDate(int month, int day, int year){
    DueDate->setMonth(month);
	DueDate->setDay(day);
	DueDate->setYear(year);
}

void EditDueTime(int hour, int minute){
    DueTime->setHour(hour);
    DueTime->setMinute(minute);
}


Date* Homework::GetDueDate() const { return DueDate; }

Time* Homework::GetDueTime() const { return DueTime; }


void Homework::printAllInfo(){
    GetDueDate();
    GetDueTime();
}

void Homework::editTask(){
    GetDueDate();
    GetDueTime();
}

