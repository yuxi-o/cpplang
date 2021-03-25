#include "read.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ReaderFactory *factory = new JpgReaderFactory();
    Reader *reader = factory->getReader();
    reader->read();
    factory->deleteReader(reader);
    delete factory;

    return 0;
}
