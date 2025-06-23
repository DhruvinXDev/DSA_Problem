#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter  string :";
    getline(cin, str);
    string temp;
    int len = 0;
    stringstream sstr(str);
    while (sstr >> temp)
    {
        if (temp.length() > len)
            len = temp.length();
    }
    cout<<"Max length of tokan is : " <<len<<endl;
    return 0;
}
