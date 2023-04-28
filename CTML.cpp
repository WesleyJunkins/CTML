#ifndef CPPtoHTML
#define CPPtoHTML

#include <iostream>
#include <fstream>

using namespace std;

class CTML
{
    private:
    ofstream file;

    public:
    /**
     * @brief Construct a new CTML object. A boilerplate HTML file for personal editing.
     * 
     */
    CTML()
    {
        file.open("index.html");

        file<<"<!DOCTYPE html>\n";
        file<<"<html lang=\"en\">\n";
        file<<"<head>\n";
        file<<"\t<meta charset=\"UTF-8\">\n";
        file<<"\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
        file<<"\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
        file<<"\t<title>CTML Document</title>\n";
        file<<"</head>\n";
        file<<"<body>\n\n";
        file<<"</body>\n";
        file<<"</html>\n";

        file.close();
    };
};

int main()
{
    CTML *myHtml = new CTML();
    return 0;
};

#endif