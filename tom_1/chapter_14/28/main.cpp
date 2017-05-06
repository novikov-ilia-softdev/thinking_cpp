#include <iostream>
#include <new>
#include <vector>

class Widget{
public:
	void* operator new( size_t size);
	void operator delete( void* ptr);

	void* operator new[]( size_t size);
	void operator delete[]( void* ptr);
};

void* Widget::operator new( size_t size)
{
	std::cout << "Widget::operator new, size = " << size << std::endl;
	return ::new char[ size];
}

void Widget::operator delete( void* ptr)
{
	std::cout << "Widget::operator delete, ptr = " << ptr << std::endl;
	delete[] ptr;
}

void* Widget::operator new[]( size_t size)
{
	std::cout << "Widget::operator new[], size = " << size << std::endl;
	return ::new char[ size];
}

void Widget::operator delete[]( void* ptr)
{
	std::cout << "Widget::operator delete[], ptr = " << ptr << std::endl;
	delete[] ptr;
}

class ScrollBarWidget: public Widget{
public:
	void* operator new( size_t size);
	void operator delete( void* ptr);

	void* operator new[]( size_t size);
	void operator delete[]( void* ptr);
};

void* ScrollBarWidget::operator new( size_t size)
{
	std::cout << "ScrollBarWidget::operator new, size = " << size << std::endl;
	return ::new char[ size];
}

void ScrollBarWidget::operator delete( void* ptr)
{
	std::cout << "ScrollBarWidget::operator delete, ptr = " << ptr << std::endl;
	delete[] ptr;
}

void* ScrollBarWidget::operator new[]( size_t size)
{
	std::cout << "ScrollBarWidget::operator new[], size = " << size << std::endl;
	return ::new char[ size];
}

void ScrollBarWidget::operator delete[]( void* ptr)
{
	std::cout << "ScrollBarWidget::operator delete[], ptr = " << ptr << std::endl;
	delete[] ptr;
}

int main()
{
	ScrollBarWidget* ptr = new ScrollBarWidget;
	std::cout << "ptr = " << ptr << std::endl;
	delete ptr;

	ScrollBarWidget* ptr1 = new ScrollBarWidget;
	std::cout << "ptr1 = " << ptr1 << std::endl;
	delete ptr1;

	std::cout << std::endl;

	ScrollBarWidget* arr = new ScrollBarWidget[ 5];
	std::cout << "arr = " << arr << std::endl;
	delete [] arr;

	ScrollBarWidget* arr1 = new ScrollBarWidget[ 5];
	std::cout << "arr1 = " << arr1 << std::endl;
	delete [] arr1;
}
