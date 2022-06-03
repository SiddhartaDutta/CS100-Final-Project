 # Task Manager
 Authors: [Siddharta Dutta](https://github.com/SiddhartaDutta), [Sarah Kim](https://github.com/sarahkimmieee), [Jacob Do](https://github.com/jacobcdo), [Shihwei Lin](https://github.com/slin182)

## Project Description
  
For our project, we wanted to create something that would not only help us personally, but people in general. We decided, given we are college students ourselves, we would create a task schedule tracker to help us and other college students stay organized. To accomplish this, we plan on using C++ to create our scheduler and plan on using different data structures such as queues and lists to organize entries.

Some features this task manager will include: Tasks (with a title, description, tag/classification, duration, due data), time conflict checker when adding tasks, subtasks.
Users will be able to add, delete, view, and edit tasks/subtasks. These edits, regardless of scale (simple edit to task deletion), will also be reversible once per edit.

The program will be interacted through a CLI.

## Class Diagram

![image of current version of class diagram](./images/Screenshot_1515.png)

### Strategy Patterns Implemented

The design patterns we chose include the following:

- Strategy: We chose to use strategy to allow us to create and add new types of tasks easily that all share common algorithms with differing implementations. By following the strategy pattern, we can quickly and easily add additional task subtypes and the respective algorithms required. It also allows the user to have a consistent syntax when dealing with multiple types of subtasks. This helps us write better code as we do not have to update client-side code every time a new subclass is created and thus enables us to better organize the code. It also allows us to quickly add new subtasks relatively quickly and smoothly. In the above diagram, the strategy pattern can be comprised by the blue, green, and yellow regions which show an abstract class "ParentTask" that has virtual functions implemented uniquly in the different subclasses. This allows for the composite subclass to use the same calls for the different objects while producing different results (due to the differing implementations of each respective algorithm).

- Composite: We used the composite strategy to a small degree to allows us to quickly create multiple different task subtypes that will all also be grouped together and interfaced by a single client class. By having the project set up in this format, we can not only easily integrate new task subtypes because of their shared ParentTask class allowing for consistent operation syntax, but the use of a strategy pattern compliments this fast development and integration promoting design. In the above diagram, the composite pattern can be comprised of the blue, green, and yellow regions which show the component class "ParentTask", the composite class "TaskManager", and the different leaves: "Meeting", "GenericTask", "Homework", "Shopping".

### Class Descriptions
 For our program to work, we are using 6 classes. As denoted in the class diagram, the green are leaves for the strategy pattern with the orange acting as our base/parent class. The yellow section represents our client class which our main file will use to interact with the parent and subclass objects. The following describes all the core methods of the leaf classes:

- PrintAllInfo() : Prints all member variable data
- EditTitle() : Edits title of task
- EditStartTime() : Edits start time of task
- EditEndTime() : Edits end time of task
- EditDate() : Edits date of task
- EditLocation() : Edits location of task
- EditSubTasks() : Edits subtasks
- EditDescription() : Edits description of task
- EditDueDate() : Edits task due date
- EditDueTime() : Edits task due time
- EditShoppingList() : Edits string list
- GetTitle() : Returns task title
- GetStartTime() : Returns task start time
- GetEndTime() : Returns task end time
- GetDate() : Returns task date
- GetLocation() : Returns task location
- GetSubTasks() : Returns subtask list
- GetDescription() : Returns task description
- GetDueDate() : Returns task due date
- GetDueTime() : Returns task due time
- GetShoppingList() : Returns task string list

The following describes all the core methods of the client class:

- PrintAllInfo() : Prints all member variable data
- Add() : Add task
- Delete() : Delete task
- ViewNext() : View next task
- ViewByTitle() : Search tasks by title
- Edit() : Edit task
- ReverseLastEdit() : Reverse last edit

 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 Currently unavailable since project still in development.

 ## Installation/Usage

 
 ## Testing
 To test the project, we utilized the googletest testing framework. After setting up the appropriate files, we followed the following system to ensure the project was consistently validated:
 1. Develop code to solve current issue being solved.
 2. After development phase, begin rigorous testing of new code developed (test as many different/possible scenarios).
 3. After all tests are confirmed to be passing, assign separate members to review and merge the development and testing branch (branch being worked on).
 4. After the branch is verified, it can be merged.

 Following this simple system, we were able to ensure code additions did not cause other parts of the project previously working to have errors or "break." Running compiling the project using the "Installation/Usage" instructions and running the "test.exe" file will run all currently implemented tests.