#ifndef __GENERIC_TASKS_HPP__
#define __GENERIC_TASKS_HPP__

#include "../ParentTask.hpp"

class GenericTask : public ParentTask{

    private:
        std::string description;

    public:

        // Constructor
        GenericTask(std::string desc = ""){
            description = desc;
        }

        // Destructor
        ~GenericTask(){}

        /* ACCESSORS */
        
        /// Print all info
        void printAllInfo();

        /// Return desc
        std::string getDescription() const;

};

#endif
