#include "Shopping.hpp"
#include "GenericTask.hpp"
#include <iostream>
#include <vector>

using namespace std;

void Shopping::printAllInfo(){
        cout << "test\n";
}

void Shopping::editTask(){
        cout <<"task edited\n";
}

vector<string*> Shopping::getShoppingList(){
        return ShoppingList;
}

void Shopping::setShoppingList(int index, string newItem){
        if(index < 0)
                return;

        vector<string*>::iterator it = ShoppingList.begin();
        ShoppingList.insert (it+index, &newItem);
}

void Shopping::addItem(string newItem){
        ShoppingList.push_back (&newItem);
}

void Shopping::removeItem(int index){
        ShoppingList.erase(ShoppingList.begin()+index)
}
