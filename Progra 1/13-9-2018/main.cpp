#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv[]) {
	
    int x[3];
    x[0] =21;
    x[1] =6;
    x[2] =19;
    for (int i=0; i<3; i++){
    cout << x[i]<<endl;
}
 
	cout <<"Press the Enter key to continue";
	cin.get();
	return EXIT_SUCCESS;
}
