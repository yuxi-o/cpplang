#ifndef _SMARTPTR_H_
#define _SMARTPRT_H_
#include <stdio.h>

#define TRACE printf

template <typename T>
class SmartPtr{
public:
	SmartPtr(T* p_)
		:p(p_)
	{
		TRACE("constructor SmartPtr\n");
		p->upcount();
	}

	~SmartPtr(void)
	{
		TRACE("deconstructor SmartPtr\n");
		p->downcount();
	}

	operator T*(void){
		TRACE("T* operator\n");
		return p;
	}

	T& operator*(void){
		TRACE("* operator\n");
		return *p;
	}

	T* operator->(void){
		TRACE("-> operator\n");
		return p;
	}

	SmartPtr& operator=(SmartPtr<T> &p_){
		TRACE("= operator\n");
		return operator=((T*)p_);
	}

	SmartPtr& operator=(T* p_){
		p_->upcount();
		p->downcount();
		p=p_;
		return *this;
	}

	SmartPtr(const SmartPtr<T> &p_){
		p = p_.p;
	}

	SmartPtr(const SmartPtr<T> &p_) {
		p = p_.p;
		p->upcount();
	}

private:	
	T* p;

};


#endif
