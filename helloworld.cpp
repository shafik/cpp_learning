//This is the basics of cpp

//This is the inbuilt header file which exactly means 'input output stream'.
//It takes care of the functions such as cin, cout etc, which is used to take input and print output
#include<iostream> 

using namespace std;
//“using namespace std” means we use the namespace named std. “std” is an abbreviation for standard. 
//If we don’t want to use this line of code, we can use the things in this namespace like this. std::cout, std::endl.
//If this namespace is not used, then computer finds for the cout, cin and endl etc.. Computer cannot identify those and therefore it throws errors.

//int main is our driver function, which is the main function called whenever a cpp file is executed
int main() {
    cout << "Hello World!"; //If we have hadn't written 'using namespace std', our statement would have been
    //std::cout << "Hello World!";
    return 0; 
    //'int' in int main means we have to return an integer value
}
