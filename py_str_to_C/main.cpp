#include <iostream>
#include "C_string_like_python.hpp"

int main(){
  pythString* a = new pythString("BoNjOUr YoLLo mAMENE");
  a->setAttr("pute");
  cout<<*a<<endl;
}