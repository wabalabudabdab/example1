#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <bubble.h>
#include <iostream>
using namespace std;

int main(){
    char str[80];
    int i;

    strcpy(str,"abcdefg");

    for (i=0; str[i]; i++)
        str[i] = toupper(str[i]);

    cout << str;

    return 0;

}
