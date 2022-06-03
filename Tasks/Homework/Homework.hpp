#ifndef __HOMEWORK_HPP__
#define __HOMEWORK_HPP__

#include <vector>

#include "../ParentTask.hpp"
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"

using namespace std;


class Homework : public ParentTask{

    private:

        Date* DueDate;

        Time* DueTime;

        vector<ParentTask*> SubTasks;

    public:
    
        void Homework(string Title = "", int month = 0, int day = 0, int year = 0, int DueTimeHour = 0, int DueTimeMin = 0) : ParentTask();

        void EditDueDate(int month, int day, int year);

        void EditDueTime(int hour, int minute);

        void printAllInfo();
	void EditTask();
		
        Date* GetDueDate() const;
	Time* GetDueTime() const;
}
#endif
