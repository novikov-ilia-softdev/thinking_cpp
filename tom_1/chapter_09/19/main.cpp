#include <iostream>

#define FIELD(a) \
				 private:	\
				 	 int a##_value;	\
				 public:	\
			     	 int get##a##Value() const {return a##_value;}	\
			     	 void set##a##Value( int i) { a##_value = i;}

class Record{
public:
	FIELD( One);
	FIELD( Two);
	FIELD( Three);
};

int main()
{
	Record record;
	record.setOneValue( 5);
	record.setTwoValue( 7);
	record.setThreeValue( 9);

	std::cout << "record.getOneValue(): " << record.getOneValue() << std::endl;
	std::cout << "record.getTwoValue(): " << record.getTwoValue() << std::endl;
	std::cout << "record.getThreeValue(): " << record.getThreeValue() << std::endl;
}
