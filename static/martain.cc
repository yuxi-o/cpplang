#include "martain.h"

int Martain::martainCount = 0;

Martain::Martain(int id)
	:m_id(id)
{
//	m_id = id; // const常量只能在初始化列表初始化
	martainCount++;
}

Martain::~Martain(){
	martainCount--;
}

int Martain::getCount(){
//	return martainCount + m_id;
	return martainCount ; // 静态函数不能访问非静态成员
}

void Martain::fight() const{
	
}

void Martain::hide() const{

}
