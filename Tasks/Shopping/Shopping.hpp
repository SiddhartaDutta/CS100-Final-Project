#ifndef __SHOPPING_HPP__
#define __SHOPPING_HPP__

#include <iostream>
#include <vector>
#include <string>
#include "../ParentTask.hpp"

using namespace std;


class Shopping : public ParentTask {

        private:

                vector<string*> ShoppingList;

        public:

                ShoppingList(){
                        return;
                }

        /* mutators */

                void setShoppingList(int index, string newItem);

                void addItem(string newItem);

                void removeItem(int index);

                void editTask(istream& input, ostream& output);


        /* accessors */

                void printAllInfo();

                vector<string*> getShoppingList();

};

#endif
