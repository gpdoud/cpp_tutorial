#include "functor.h"

Multiplier::Multiplier(int i) : m(i) {}

int Multiplier::operator()(int i) const { return m * i; }
