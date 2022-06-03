#ifndef __SHOPPING_CONSTRUCTORS_TESTS__
#define __SHOPPING_CONSTRUCTORS_TESTS__

#include "gtest/gtest.h"

#include "../../Tasks/Shopping/Shopping.hpp"



TEST(ShoppingConstructor , CreateShopping){
  Shopping s = new Shopping();

  EXPECT(0, s.getShoppingList().size());
}



TEST(ShoppingConstructor , AddShopping){
  Shopping s = new Shopping();

  string word = "word1";

  vector<string> TestList;

  for(int i = 0; i < 10; i++){
    TestList.push_back(word + i);
    s.additem( TestList.at(i) ); 
  }

  vector<string*> sList ( s.getShoppingList() );

  for(int j = 0; j < 10; j++){
    EXPECT_EQ(TestList.at(j),*sList.at(j));
}
  
  
  
TEST(ShoppingConstructor , RemoveShopping){
  Shopping s = new Shopping();

  string word = "word1";

  for(int i = 0; i < 10; i++)
    s.additem( word + i ); 
  
  EXPECT_EQ(10,s.getShoppingList.size());

  for(int j = 0; j < 10; j++)
    s.removeItem(0);
  
  EXPECT_EQ(0,s.getShoppingList.size());
}
  
  
#endif
  
  
