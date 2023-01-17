//
//  class Calculator.hpp
//  OOP ДЗ 11 Калькулятор Шаблон
//
//  Created by Павел on 16.01.2023.
//

#ifndef class_Calculator_hpp
#define class_Calculator_hpp

#include <stdio.h>
#include "class Calculator.hpp"
#include <iostream>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>



template <class T1, class T2> class Calculator{
public:
 
    Calculator(T1 number1, T2 number2):_number1(number1), _number2(number2){}
      
    

void setValue1( T1 number1){
     _number1 = number1;
}

void setValue2( T2 number2){
             _number2 = number2;
        }
    
    T1 getSum(){
             T1 _res = _number1 + _number2;
             return _res;

    }
    
    T1 getMultiply(){
             T1 _res = _number1 * _number2;
             return _res;
        }
   
    T1 getSub(){
             T1 _res = _number1 - _number2;
             return _res;
        }
   
    T1 getDiv(){
            
            if(_number2!=0){
                 T1 _res = _number1 / _number2;
                 return _res;
            }
        std::cout << "Division By Zero" <<'\n';
        return 1;
        }
     
 private:
      T1 _number1;
      T2 _number2;
      T1 _res;
 };









#endif /* class_Calculator_hpp */
