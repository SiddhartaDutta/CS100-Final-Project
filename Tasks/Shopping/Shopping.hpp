#ifndef __SHOPPING_HPP__
#define __SHOPPING_HPP__

#include <iostream>
#include <vector>
#include <string>


using namespace std;

#include "../ParentTask.hpp"

class Shopping : public ParentTask {

        private:

                vector<string*> ShoppingList;

        public:

                ShoppingList(vector<string*> slist ){
                        this-> ShoppingList = slist;
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
