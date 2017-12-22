/* Problem 1 */
/* Using built-in sort */
#include <sstream>
#include <iostream>
int compare (const void * a, const void * b){
    return (* (int*)a - *(int*)b);
}

void pr_ints (const int * a, int len){
    std::stringstream ss;
    for(int i = 0; i < len; ++i){
        ss << a[i] << "\t";
    }
    ss << std::endl;
    std::cout << ss.str();
}
	

