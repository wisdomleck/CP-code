#include <iostream>

// So we can use cout and cin without the need of std:: in front
using namespace std;


// Function overloading
double double_double(double);
int double_double(int);
void print_string(char* string);
int count_char(char*, char);

int main() {
	cout << "Hello World!\n"; // Printf also works, but cout seems a lot better
	cout << "Hello " << double_double(1.23456) << "!\n";
	cout << "Hello " << double_double(123456) << "!\n";
	cout << "The value of true as an int: " << int(true) << "\n";
	cout << "Size of int: " << sizeof(int) << "\n";
	cout << "Decimals in e-2: " << 123456789e-5 << endl;
	int x = 10;
	int y = 3;
	double z = 2.22222;
	x=z*3;
	cout << ++x << endl;
	auto b = "hello\n"; // Auto will auto choose a type of variable
	cout << b;
	// const and constexpr - const is evaluated a compile or run time,
	// constexpr must be evaluated at compiled time. can't assign variable value
	const double PI1 = 3.1415;
	// constexpr double PI2 = double_double(PI1); won't work

	int array[10];
	for(auto i = 0; i < 10; i++){
		array[i] = i*i;
	}
	for(auto x : array){
		cout << x << " ";
	}
	cout << "\n";

	// & here means in reference to. Doesn't make a copy of the argument.
	for(auto& x : array){ // Modifies each element x in array
		x*=2;
		cout << x << " ";
	}
	cout << "\n";

	for(auto x : {1,31,42,4155,25,87,549}){
		cout << x*x << " ";
	}
	cout << "\n";

	// nullptr is always a NULL pointer. NULL could be ambiguous. Eg, null character, 0
	int* intptr = nullptr;
    // int randnum = NULL works, but int randnum = nullptr doesnt

	char string2[50] = "qwpiepqweqoiweuoiqjdkpoqipqkwp";
	cout << string2 << "\n";

	string string1 = "aapsidpsdqwjpdajpsdjqpwoi";
	cout << string1 << "\n";
	cout << string1[10] << "\n";

	// Strings are same as in C, but can also use string class to create string objects
	print_string(string2);

	// Can't use string object as char* argument. Also, use const char* if input
	// a constant string
	cout << count_char(string2, 'q') << " instances of q in " << string2;

	return 0;

}

int count_char(char* string, char character){
	int count = 0;
	if(string == nullptr){
		return 0;
	}
	while(*string){
		if(character == *string){
			count++;
		}
		string++;
	}
	return count;
}

void print_string(char* string){
	while(*string){
		cout << *string << " ";
		string++;
	}
	cout << "\n";

}

int double_double(int x){
	return 2*x;

}

double double_double(double x){
	return 2*x;
}
