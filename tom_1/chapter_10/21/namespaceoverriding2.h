#ifndef NAMESPACEOVERRIDING2_H
#define NAMESPACEOVERRIDING2_H

#include "namespaceint.h"

namespace Calculation{

using namespace Int;
Integer divide( Integer, Integer);

}

#endif // NAMESPACEOVERRIDING2_H
