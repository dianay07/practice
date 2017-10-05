#include <iostream>
#include <memory>
using namespace std;

class Widget;
typedef std::tr1::shared_ptr<Widget> Widget_ptr;

class Widget {	
public:
	Widget() { cout << " Widget() " << endl; }		//������
	~Widget() { cout << "~Widget()" << endl; }		//�Ҹ���
	
	//�Լ�
	void domsomething() {}
	
	std::tr1::shared_ptr<Widget> getThis() { return std::tr1::shared_ptr<Widget>(this); }

};

//�������  =  �����ڿ��� �ƹ��� ������ �����ʰ� �ϱ����� ���
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