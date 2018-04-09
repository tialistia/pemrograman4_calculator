#include "calculator.h"
#include <iostream>
#include <queue>

using namespace std;

int main() {
    Calculator calculator(10,5);
    
	Command *command(0);
    
	AddCommand addCmd(&calculator);
    
	SubstractCommand strCmd(&calculator);
    
	command = &strCmd;
    
	int result = command->execute();
    
	cout<<result<<endl;
}
