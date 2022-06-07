
#include <vector>

#include "../ParentTask.hpp"
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"

using namespace std;

class GenericTask : public ParentTask {

	private:
	
		string description;
	
	public:
		GenericTask(){
			return;
		}
//mutators
	
	void setDescription(string description);

	void editTast(istream& input, ostream& output);

//accessors
	void printAllInfo();

	 getDescription() const;
};
#endif

