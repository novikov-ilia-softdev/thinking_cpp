#ifndef OBJECT_H
#define OBJECT_H

class Object{
public:
	virtual ~Object() = 0;
};

inline Object::~Object() {}

#endif //OBJECT_H
