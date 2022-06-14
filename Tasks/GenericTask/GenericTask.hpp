#ifndef __GENERIC_TASKS_HPP__
#define __GENERIC_TASKS_HPP__

#include "../ParentTask.hpp"

class GenericTask : public ParentTask{

    private:
        std::string description;

    public:

        // Constructor
        GenericTask(std::string title = "", std::string desc = ""){
            this->title = title;
            description = desc;
        }

        // Destructor
        ~GenericTask(){}

        /* ACCESSORS */
        
        /// Print all info
        void printAllInfo();

        /// Return desc
        std::string getDescription() const;

        /* Mutators */

        /// Runs menu to edit all attributes : follows pattern for universal object manip
		void editTask(std::istream& input, std::ostream& output);

};

#endif
