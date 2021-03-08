#include "serialPort.h"
#include <iostream>

unsigned char buff[512];
const char *dev  = "/dev/ttyUSB1";

int main()
{
	serialPort myserial;
	int i,nread,nwrite;

	cout<<"serialPort Test"<<endl;
	myserial.OpenPort(dev);
	myserial.setup(115200, 0, 8, 1, 'N'); 

	while (true)
	{
		buff[0] = 'A';
		buff[1] = 'T';
		buff[2] = '\r';
		printf("Send:[%.*s]\n", 2, buff);
		for(i = 0; i < 3; i++){
			printf("0x%x ", buff[i]);
		}
		cout<<endl;

		nwrite = myserial.writeBuffer(buff, 3);
		nread = myserial.readBuffer(buff, 12);

		printf("Recv:[%.*s]\n", 12, buff);
		for(i = 0; i < 12; i++){
			printf("0x%x ", buff[i]);
		}
		cout<<endl;

		sleep(1);
	}

	return 0;
}

