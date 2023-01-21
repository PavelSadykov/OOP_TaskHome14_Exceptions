//
//  main.cpp
//  ООП ДЗ 14 Исключения
//
//  Created by Павел on 20.01.2023.
//

#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <tuple>

//std::cout<<"Задача 2"<<'\n';
class MyException{
public:
    MyException(){}
    
    const std::string & what(){
    return _whatStr;
    }
    
    //Задача 3
    const char * what () const throw () {
          return "Exception";
       }
    
    
private:
   std::string _whatStr = "MyWorld";
    
};





//  std::cout<<"Задача 4"<<'\n';
double SQ(double question){
   double answer;
        if( question < 0 ){
            throw "sqrt from (-)Number"; // const char*
        }
        answer = sqrt( question );
    std::cout<<"Квадратный корень из "<<question<<" = "<<answer<<"\n";
    return answer;
}



int main(int argc, const char * argv[]) {

    std::cout<<"Задача 1"<<'\n';
    try {
        while (true) {
            new int[100000000ul];
    }
    } catch (const std::bad_alloc& e) {
        std::cout << "Allocation failed: " << e.what() << '\n';
    }
   
  
    std::cout<<"Задача 2"<<'\n';
    MyException A;
    std::cout<<A.what()<<std::endl;
    
    
    
    
    std::cout<<"Задача 3"<<'\n';
    try {
          throw MyException();
       } catch(MyException& e) {
          std::cout << "MyException caught" << std::endl;
          std::cout << e.what() << std::endl;
       }
       
    
    
    std::cout<<"\nЗадача 4"<<'\n';
    double question;
    std::cout<<"Введите число \n--> "<<'\n';
    std::cin>>question;
    try{
       
        SQ(question);
    }
        catch(const char * e ){
     std::cerr<< e <<std::endl;
}
   
        
    
   
    
    return 0;
}
