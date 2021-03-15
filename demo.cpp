#include <iostream>
#include "md5.hpp"

using namespace std;

int main()
{
    auto *buff = (char *) "1420820036182";

    MD5 md5(buff, strlen(buff));
    cout << md5.toString() << endl;
    return 0;
}
