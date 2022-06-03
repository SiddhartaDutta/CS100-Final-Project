 # Task Manager
 Authors: [Siddharta Dutta](https://github.com/SiddhartaDutta), [Sarah Kim](https://github.com/sarahkimmieee), [Jacob Do](https://github.com/jacobcdo), [Shihwei Lin](https://github.com/slin182)

## Project Description
  
For our project, we wanted to create something that would not only help us personally, but people in general. We decided, given we are college students ourselves, we would create a task schedule tracker to help us and other college students stay organized. To accomplish this, we plan on using C++ to create our scheduler and plan on using different data structures such as queues and lists to organize entries.

Some features this task manager will include: Tasks (with a title, description, tag/classification, duration, due data), time conflict checker when adding tasks, subtasks.
Users will be able to add, delete, view, and edit tasks/subtasks. These edits, regardless of scale (simple edit to task deletion), will also be reversible once per edit.

The program will be interacted through a CLI.

## Class Diagram

![Image of current version of class diagram.](./images/Screenshot_1524.png)

### Strategy Patterns Implemented

The design patterns we chose include the following:

- Strategy: We chose to use strategy to allow us to create and add new types of tasks easily that all share common algorithms with differing implementations. By following the strategy pattern, we can quickly and easily add additional task subtypes and the respective algorithms required. It also allows the user to have a consistent syntax when dealing with multiple types of subtasks. This helps us write better code as we do not have to update client-side code every time a new subclass is created and thus enables us to better organize the code. It also allows us to quickly add new subtasks relatively quickly and smoothly. In the above diagram, the strategy pattern can be comprised by the blue, green, and yellow regions which show an abstract class *ParentTask* that has virtual functions implemented uniquly in the different subclasses. This allows for the composite subclass to use the same calls for the different objects while producing different results (due to the differing implementations of each respective algorithm).

- Composite: We used the composite strategy to a small degree to allows us to quickly create multiple different task subtypes that will all also be grouped together and interfaced by a single client class. By having the project set up in this format, we can not only easily integrate new task subtypes because of their shared ParentTask class allowing for consistent operation syntax, but the use of a strategy pattern compliments this fast development and integration promoting design. In the above diagram, the composite pattern can be comprised of the blue, green, and yellow regions which show the component class *ParentTask*, the composite class *TaskManager*, and the different leaves: *Meeting*, *GenericTask*, *Homework*, *Shopping*.

### General Class Descriptions
For this project, there are a total of <u>eight</u> different classes required. The classes, as depicted in the diagram, are divided into <u>four</u> different categories. The four categories are:

- <span style="color:cornflowerblue">Blue:</span> The single blue class, *ParentTask*, acts as both an abstract class for the implemented strategy pattern and as the component class for the implemented composite pattern. It contains the member variables `title` and `subTasks` which represent the title of a task and the subtasks that can make up a given task, respectively. As these are shared by all subclasses, they can be protected variables of the abstract class. The pure virtual methods of the class are editTask and printAllInfo as each subclass has it's own unique member variables so editing and printing all of its data requires different algorithms.

- <span style="color:yellow">Yellow:</span> The single yellow class, *TaskManager*, acts as a composite for the component pattern as well as the class through which the client interfaces (client being main). It contains a single member variable, `OldToDoList` which is a vector that is updated before each update to the *ParentTask* vector so that any changes can be reverted once by the user.

- <span style="color:mediumslateblue">Purple:</span> The *Date* and *Time* classes are not subclasses of *ParentTask*. Rather, they are "helper" classes so that dates and times can be uniformly represented and interacted with. It also makes the code neater in general since there aren't a multitude of date and time related variables with long names to clearly differentiate them. The *Date* class has the three member variables `month`, `day`, and `year` (all `int` type) that are accessed and modified by their "bare" accessors and mutators as well as by an all-encompassing mutator that uses a menu to allow the user an interactive way to edit the object. The *Time* class works in the same manner but with the `hour` and `minute` member variables (also both are `int` type).

- <span style="color:lime">Green:</span> The green category includes the *Meeting*, *GenericTask*, *Homework*, and *Shopping* subclasses. These classes inherit from *ParentClass* and act both as leaves for the composite pattern and as different concrete strategies for the strategy/compositor (the *ParentTask* class). These help to divide the different subtasks with their different parameters into different children classes with common algorithm calls so that they can be treated in a uniform manner. Each subclass contains accessors and mutators for their member variables while also containing an extra "menu-nized" mutator like that found in the `Date` and `Time` classes described above. 

### Detailed Class Description
The following dropdown contains general descriptions of every method currently implemented/planned to be implemented.

<details><summary>Extended Descriptions</summary>

***ParentTask***
>- `virtual void printAllInfo()` : Prints all object data formatted appropriately for the *ParentTask* type object's member variables.

>- `virtual void editTask(std::istream& input, std::ostream& output)` : Calls "menu-nized" mutator for the appropriate *ParentTask* type object.

>- `string getTitle()` : Returns the title of the *ParentTask* type object.

>- `void setTitle(std::string title)` : Sets *ParentTask* type object's title.

>- `void setTitleFromMenu(std::istream& input, std::ostream& output)` : Sets *ParentTask* type object's title using a menu.

>- `void operateSubTaskMenu()` : Operates the menu to edit the subtasks of a given *ParentTask* type object.

***Meeting***
>- `Time* getStartTime()` : Returns the start time of the *Meeting* object.

>- `Time* getEndTime()` : Returns the end time of the *Meeting* object.

>- `Date* getDate()` : Returns the date of the *Meeting* object.

>- `string getLocation()` : Returns the location of the *Meeting* object.

>- `void setStartTime(int hour, int minute)` : Edits the *Meeting* object's start time.

>- `void setEndTime(int hour, int minute)` : Edits the *Meeting* object's end time.

>- `void setDate(int month, int day, int year)` : Edits the *Meeting* object's date.

>- `void setLocation(string location)` : Edits the *Meeting* object's location.

***GenericTask***
>- `string getDescription()` : Returns the *GenericTask* object's description.

>- `void setDescription(string description)` : Edits the *GenericTask* object's description.

***Homework***
>- `Date* getDueDate()` : Returns the due date of the *Homework* object.

>- `Time* getDueTime()` : Returns the due time of the *Homework* object.

>- `void setDueDate(int month, int day, int year)` : Edits the *Homework* object's due date.

>- `void setDueTime(int hour, int minute)` : Edits the *Homework* object's due time.

***Shopping***
>- `vector<string*> getShoppingList()` : Return the *Shopping* object's "shopping list".

>- `void setShoppingList(int index, std::string newItem)` : Edits a single element of the *Shopping* object's "shopping list".

>- `void addItem(std::string newItem)` : Adds a single element to the *Shopping* object's "shopping list".

>- `void removeItem(int index)` : Removes a single element from the *Shopping* object's "shopping list".

***TaskManager***
>- `void add()` : Calls a "menu-nized" mutator to add a task to the *TaskManager* object's subTasks vector.

>- `void delete()` : Calls a "menu-nized" mutator to delete a task from the *TaskManager* object's subTasks vector.

>- `void newNext()` : Displays first task to be finished from the *TaskManager* object's subTasks vector.

>- `void viewByTitle()` : Calls a "menu-nized" accessor to search and display tasks by title.

>- `void reverseLastEdit()` : Sets the *TaskManager* object's subTasks vector to the *TaskManager* object's OldToDoList vector.

***Date***
>- `int getMonth()` : Returns the *Date* object's month.

>- `int getDay()` : Returns the *Date* object's day.

>- `int getYear()` : Returns the *Date* object's year.

>- `void setMonth(int month)` : Edits the *Date* object's month.

>- `void setDay(int day)` : Edits the *Date* object's day.

>- `void setYear(int year)` : Edits the *Date* object's year.

>- `void setDate(std::istream& input, std::ostream& output)` : Calls a "menu-nized" mutator to edit the *Date* object.

***Time***
>- `int getHour()` : Returns the *Time* object's hour.

>- `int getMinute()` : Returns the *Time* object's minute.

>- `void setHour(int hour)` : Edits the *Time* object's hour.

>- `void setMinute(int minute)` : Edits the *Time* object's minute.

>- `void setTime(std::istream& input, std::ostream& output)` : Calls a "menu-nized" mutator to edit the *Time* object.

</details> 
 
 ## Screenshots
 Currently, main project screenshots are unavailable since project still in development.

<details><summary>Unit Test Screenshots</summary>

 ![Image of top half of ./test run.](./images/Screenshot_1526.png)

 ![Image of bottom half of ./test run.](./images/Screenshot_1525.png)

</details>

 ## Installation/Usage
 Since the project is still in development, installation is not currently an option. However, you can download the "test.exe" file which will run all current tests from here: [Google Drive to "test.exe"](https://drive.google.com/drive/folders/1P3eTyWPxXYc-eMa-bkTmEFtWDHt6gyM6?usp=sharing)

 The "test.exe" file may not work. If that is the case, in an IDE with a C++ compiler, please run the following commands:

 **To clone the repository:**

 `git clone --recursive https://github.com/cs100/final-project-decoders.git`

 **To create the MakeFile:**

 `cmake .` or `cmake3 .`

 <t>followed by:</t>
 
 `make`

 **To run the "test.exe" file:**

 `./test`
 
 ## Testing
 To test the project, we utilized the googletest testing framework. After setting up the appropriate files, we followed the following system to ensure the project was consistently validated:
 1. Develop code to solve current issue being solved.
 2. After development phase, begin rigorous testing of new code developed (test as many different/possible scenarios).
 3. After all tests are confirmed to be passing, assign separate members to review and merge the development and testing branch (branch being worked on).
 4. After the branch is verified, it can be merged.

 Following this simple system, we were able to ensure code additions did not cause other parts of the project previously working to have errors or "break." Running compiling the project using the "Installation/Usage" instructions and running the "test.exe" file will run all currently implemented tests.