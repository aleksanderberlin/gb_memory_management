#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Current environment: ";
    #ifdef _WIN32
        cout << "Windows" << endl;
    #elif defined __APPLE__
        cout << "MacOS" << endl;
    #elif definied __linux__
        cout << "Linux" << endl;
    #endif
    cout << "Last compiled: " << __DATE__ << " " << __TIME__ << endl;
    return 0;
}
