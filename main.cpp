#include <iostream>

#include "common/Common.hpp"

#include "Concrete/ConcreteLibrary.hpp"
#include "HeaderOnly/HeaderOnlyLibrary.hpp"

int main() {
    std::cout << "Hello, TestCMakeSubprojects! \n";

    common::Real_t real = 0.0;

    // Class definition provided by a concrete library sub-project.
    concrete::ConcreteClass cc;
    cc.show();

    // Class definition provided by a header-only library sub-project.
    header::HeaderOnlyClass<common::Real_t> hoc;
    hoc.show();

    return 0;
}
