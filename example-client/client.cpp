#include <iostream>
#include "TCPClient.h"

int main(int argc, char *argv[])
{
	if(argc >= 2)
	{
		TCPClient tcp;
		tcp.setup("127.0.0.1",11999);
		int num = atoi(argv[2]);
		cout << "Num Request:" << num <<endl;
		for(int i = 0; i < num; i++)
		{
			string msg = argv[1];
			tcp.Send(msg);
			cout << tcp.receive(msg.length()) << endl;
			sleep(1);
		}
		exit(0);
		return 0;
	}
	else cout << "Error: message num-request" << endl;
}
