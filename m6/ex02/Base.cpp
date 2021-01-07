#include "Base.hpp"

Base::Base() { };

Base::~Base() { };

Base::Base(const Base &base) { (void)base; };

Base &Base::operator=(const Base &base) { (void)base; return *this; };
