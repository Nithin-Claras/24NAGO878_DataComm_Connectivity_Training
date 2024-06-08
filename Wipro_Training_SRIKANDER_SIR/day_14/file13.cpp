#include <iostream>
#include <memory>

using namespace std;

int main()
{
	shared_ptr<int> s (new int(5) );
	weak_ptr<int> w(s); // valid
	
	cout << s.use_count() << endl;
	cout << w.use_count() << endl;
	
	return 0;
}
