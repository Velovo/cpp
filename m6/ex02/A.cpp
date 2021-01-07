#include "A.hpp"

A::A() { };

A::~A() { };

A::A(const A &a) { (void)a; };

A &A::operator=(const A &a) { (void)a; return *this; };
