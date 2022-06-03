#ifndef __PARENT_TASK__
#define __PARENT_TASK__

class ParentTask {

	protected:
		std::string title;

	public:

		// Constructor
		ParentTask(){}

		// Virtual Deconstructor
		virtual ~ParentTask(){}

		// Pure Virtual Functions
		virtual void printAllInfo() = 0;
		virtual void editTask() = 0;
	
		// Mutators
		void setTitle(std::string title){ this-> title = title; }

		// Accessors
		std::string getTitle(){ return title; }

};

#endif
