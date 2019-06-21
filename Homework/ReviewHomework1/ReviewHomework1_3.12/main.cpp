//Omar Ouaddi
//CIS 17A
//3.12
//Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is F = 9/5 C + 32

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) 
{

    float celsius, fahrenheit;

	cout << "Enter the celsius temperature below to convert to fahrenheit." << endl;
	cin >> celsius;

	fahrenheit = ((9 * celsius) / 5) + 32;

	
        cout << "Temperature: " << fahrenheit << " degrees" << endl;
        
        
        return 0;
}

