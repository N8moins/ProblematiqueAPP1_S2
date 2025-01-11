#include "Vector.h"
#include <iostream>

Vector<int>* array = new Vector<int>();


void TestAdd(){

    std::cout << "size: " << array->Count() << std::endl;
    int* value1 = new int(4);
    int* value2 = new int(5);
    for (int i = 0; i < 10; i++){
        array->Add(new int(i));
    }

    array->Display(std::cout);
    std::cout << "size: " << array->Count() << std::endl;
}

void TestRemove(){
    std::cout << "size: " << array->Count() << std::endl;

    array->Remove(1);

    array->Display(std::cout);
    std::cout << "size: " << array->Count() << std::endl;
}

void TestGet(){
    array->Display(std::cout);
    
    std::cout << *array->Get(1) << std::endl;
}

void TestClear(){
    array->Display(std::cout);

    array->Clear();

    array->Display(std::cout);
}

void TestIsEmpty(){
    std::cout << "Empty : " << array->IsEmpty() << std::endl;
}

int main(){
    std::cout << "--------------" << std::endl;
    TestAdd();
    TestRemove();
    TestGet();
    TestIsEmpty();
    TestClear();
    TestIsEmpty();
    std::cout << "--------------" << std::endl;
}