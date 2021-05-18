#include "bubble.h"
#include <cstdlib>
#include <iostream>

using namespace std;
//bubble sort
bubble::bubble()
{
    int nums[10];
    int a, b, t;
    int size;

    size = 10;

    for(t=0; t<size; t++) nums[t] = rand();

    cout << "Исходный массив:\n ";
    for (t=0; t<size;t++) cout << nums[t] << ' ';
    cout << '\n';

    for (a=1; a<size; a++){
       cout << "a is " << a << "\n";
        for(b=size-1; b>=a; b--){
            if (nums[b-1] > nums[b]){
            cout << "b is " << b << "\n";
            t=nums[b-1];
            nums[b-1] = nums[b];
            nums[b] = t;
            }
        }
    }
    cout << "\nОтсортированный массив:\n  ";
    for(t=0; t<size; t++) cout << nums[t] << ' ';

}
