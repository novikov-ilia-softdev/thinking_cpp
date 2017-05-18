#include "autocounter.h"

int AutoCounter::count_ = 0;
AutoCounter::CleanupCheck AutoCounter::verifier_;
