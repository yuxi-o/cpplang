#ifndef __READ_HPP__
#define __READ_HPP__

#include <iostream>
#include <string>

class Reader
{
public:
    Reader(){
        std::cout <<"Reader create" << std::endl;
    }
    virtual void read() = 0;
};

class JpgReader: public Reader
{
public:
    JpgReader(){
        std::cout << "JpgReader create" <<std::endl;
    }
    void read(){
        std::cout << "read JPG" << std::endl;
    }
};
class PngReader :public Reader {
public:
	PngReader() { std::cout << "PngReader create!" << std::endl; }
	void read() { std::cout << "read PNG." << std::endl; }
};

class GifReader : public Reader {
public:
	GifReader() { std::cout << "GifReader create!" << std::endl;}
	void read() { std::cout << "read GIF." << std::endl; }
};

class ReaderFactory
{
public:
    virtual Reader *getReader() = 0;

    void deleteReader(Reader *p){
        if(p != NULL){
            delete p;
        }
    }
};

class JpgReaderFactory: public ReaderFactory
{
public:
    Reader *getReader(){
        Reader *preader = new JpgReader;
        return preader;
    }

};
class PngReaderFactory: public ReaderFactory{
public:
	Reader* getReader() {
		Reader* preader = new PngReader();
		return preader;
	}
};

class GifReaderFactory :public ReaderFactory {
public:
	Reader* getReader() {
		Reader* preader = new GifReader();
		return preader;
	}
};

#endif
