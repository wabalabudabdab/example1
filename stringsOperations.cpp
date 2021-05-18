#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <bubble.h>

using namespace std;

int stringOperations()
{
    char str[11];

    cout << "Input string: ";
    cin >> str;

    cout << "This is your string: ";
    cout << str;
    return 0;
}
//creating 2dimentional array
//{
//    QCoreApplication a(argc, argv);

//    int t,i,nums[3][4];

//    for (t=0; t<3; ++t){
//        for(i=0; i<4; ++i){
//            nums[t][i] = (t*4)+i+1;

//            cout << nums[t][i] << ' ';
//        }
//        cout << '\n';
//    }
// почему ввод строки не принимает введенную строку? как завершить ввод чтоб прогрмма соожрала текст?
// почему qt ругается на gets(str)?
//{
//        float a, b, s, p;
//        cout<<"a=";
//        cin>>a;
//        cout<<"b=";
//        cin>>b;
//        p=2*(a+b );
//        s=a*b;
//        cout << "Периметр прямоугольника равен " << p <<endl;
//        cout << "Площадь прямоугольника равна " << s <<endl;


//        return 0;

//}

////input and read
//{
//    char str[80];

//    cout << "Input string: ";
//    gets(str);

//    cout << str;
//    return 0;
//    }

//}


//string operations
//#include <QCoreApplication>
//#include <iostream>
//#include <cstdlib>
//#include <bubble.h>
//#include <iostream>
//using namespace std;

//int main(){

//    char s1[80], s2[80];
//    strcpy(s1, "C++");
//    strcpy(s2, "is a power");

//    cout << "length: " << strlen(s1);
//    cout << ' ' << strlen(s2) << '\n';

//    if (!strcmp(s1,s2))
//        cout << "strings are equel";
//    else cout << "strins arent equel\n";

//    strcat(s1,s2);
//    cout << s1 << '\n';

//    strcpy(s2,s1);
//    cout << s1 << " and " << s2 << '\n';

//    if (!strcmp(s1, s2))
//        cout << "strings s1 and s2 are equen now\n";

//    return 0;

//}
