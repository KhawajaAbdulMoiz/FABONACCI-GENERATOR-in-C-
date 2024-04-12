#include <iostream>
using namespace std;
int main() {
	cout<<"\n---------| FABONACCI GENERATOR |-------------\n\n";
    int n;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> n;

    int first = 0, second = 1, next;
    cout << "Fibonacci Sequence up to " << n << " terms: ";
    for (int i = 0; i <= n; ++i) {
        cout << first << "\n ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\n";
    return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	


