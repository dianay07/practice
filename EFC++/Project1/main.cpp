#include <iostream>
#include <memory>
using namespace std;

class Widget;
typedef std::tr1::shared_ptr<Widget> Widget_ptr;

class Widget {	
public:
	Widget() { cout << " Widget() " << endl; }		//생성자
	~Widget() { cout << "~Widget()" << endl; }		//소멸자
	
	//함수
	void domsomething() {}
	
	std::tr1::shared_ptr<Widget> getThis() { return std::tr1::shared_ptr<Widget>(this); }

};

//빈삭제자  =  삭제자에서 아무런 동작을 하지않게 하기위해 사용
struct arrayDeleter
{
	template<typename T>
	void operator() (T* p)
	{
		delete[] p;
	}
};

void main()
{
	/*std::shared_ptr<Widget> p(new Widget);
	std::shared_ptr<Widget> p2(p);

	p2->domsomething();
	p->domsomething();*/

	//std::tr1::shared_ptr<Widget> p(new Widget[4], arrayDeleter());

	Widget_ptr p(new Widget);
}