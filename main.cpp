//
//  main.cpp
//  OOP ДЗ 11 Калькулятор Шаблон
//
//  Created by Павел on 16.01.2023.
//

#include "class Calculator.hpp"
#include <iostream>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>


int main(int argc, const char * argv[]) {
    
  double num1=0;
  int num2=0;
    
    Calculator<double, int> d(1,2);
    std::cout<< "Введите  NUM 1 :\n";
    std::cin>>num1;
    d.setValue1(num1);
    std::cout<< "Введите  NUM 2 :\n";
    std::cin>>num2;
    d.setValue2(num2);
    std::cout<<"Сумма = ";
    std::cout<<d.getSum()<<std::endl;
    std::cout<<"Разность = ";
    std::cout<<d.getSub()<<std::endl;
    std::cout<<"Частное = ";
    std::cout<<d.getDiv()<<std::endl;
    std::cout<<"Произведение = ";
    std::cout<<d.getMultiply()<<std::endl;
    std::cout<<std::endl;
      

   
   
    return 0;
}
