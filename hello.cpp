#include <iostream>
#include "log.h"

#define name "rohan"

int cal(int);

int main(){

int a;
std::cout << "Enter a number" << std::endl;
std::cin >> a;
int mul = math(a, a);
std::cout << mul << " Day2 C++" << std::endl;
std::cout << cal(a) << " Day2 C++" << std::endl;
std::cout << name <<std::endl;
return  0;

}