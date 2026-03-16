#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
   struct Time t1, t2,t3;
   cout << "what time????? " << endl;
    getTime(t1);

    cout << "what time is it NOW" << endl;
    getTime(t2);

    cout << "the difference is: ";
    subtract(t1,t2);    

    return 0;

}


