#include "C.hpp"

C::C() { };

C::~C() { };

C::C(const C &c) { (void)c; };

C &C::operator=(const C &c) { (void)c; return *this; };
