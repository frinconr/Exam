#include "node.hh"
#include "iostream"

using namespace std;

int main(){

node <int,int> test;

test.add_tuple(2,3);
test.add_tuple(2,7);
test.add_tuple(23,282);
test.add_tuple(2282,733);


test.print_tuple();

//node<int,int>::iterator iter= test.begin();

return 0;
}
