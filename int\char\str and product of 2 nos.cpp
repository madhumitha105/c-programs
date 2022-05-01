#include <iostream>
using namespace std;
int main()
{ cout << "Size of char: " << sizeof(char) << " byte" << endl;
cout << "Size of int: " << sizeof(int) << " bytes" << endl;
cout << "Size of float: " << sizeof(float) << " bytes" << endl;
cout << "Size of double: " << sizeof(double) << " bytes" << endl;
return 0; 
}

Output:
Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes



/pdt of 2 nos
#include <iostream>
using namespace std;
int main() {
  double num1, num2, product;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  product = num1 * num2; 
  cout << "Product = " << product;   
  return 0;
}

Output:
Enter two numbers: 3.4
5.5
Product = 18.7
