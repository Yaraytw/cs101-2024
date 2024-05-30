#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class ReadClass
{

public:
    void showClass()
    {
        ifstream in;
        string line;
        int count = 0, count_len = 0;
        string *ans;
        in.open("main.cpp");
        if (in.fail())
        {
            cout << "Error opeing a file" << endl;
            in.close();
        }
        while (getline(in, line))
        {

            if (line[0] == 'c' && line[1] == 'l')
            {
                count++;
                cout << line << endl;
            }
        }
        cout << count << " class in main.cpp" << endl;
        in.close();
    }
};

int main()
{
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
