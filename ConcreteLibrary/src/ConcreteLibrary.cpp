//
// Created by yaoyu on 7/27/20.
//

#include <iostream>

#include "Concrete/ConcreteLibrary.hpp"

using namespace concrete;

ConcreteClass::ConcreteClass() {
    fixedSizeMat = Eigen::Matrix3f::Ones();
}

ConcreteClass::~ConcreteClass() {

}

void ConcreteClass::show() {
    std::cout << "This is ConcreteClass. \n";
    std::cout << fixedSizeMat << "\n";
}