#ifndef _REFCOUNT_H_
#define _REFCOUNT_H_

#define TRACE printf

class RefCount{
public:
	RefCount(void){
		crefs = 0;
	}

	virtual ~RefCount(void){}

	void upcount(void){
		++crefs;
		TRACE("up to %d\n", crefs);
	}

	void downcount(void){
		if(--crefs == 0){
			delete this;
		} else {
			TRACE("down to %d\n", crefs);
		}
	}

private:
	int crefs;
};

class Sample: public RefCount{	
public:
	Sample(){
		
	}

	~Sample(){

	}

	void doSomething(void){
		printf("Did something.\n");
	}

//private:

};

#endif
