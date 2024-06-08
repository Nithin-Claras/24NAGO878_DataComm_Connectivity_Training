#include <iostream>
#include <unistd.h>

using namespace std;
void *func(void *arg)
{
	for(int i=0; i<10; i++)
	{
		cout << '*' << endl;
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_t t1;
	
	pthread_create(&t1, NULL, func, NULL);
	
	for(int i =0; i < 5; i++)
	{
		cout << '-' << endl;
		sleep(1);
	}
	pthread_join(t1, NULL);
	cout << "End of Program \n";
	
}
