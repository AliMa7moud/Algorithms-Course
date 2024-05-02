#include <iostream>
#include <chrono>
using namespace std;

long long Rec_Fact(long long n) {
	if (n == 1 || n == 0)
		return 1;
	else
		return n * Rec_Fact(n - 1);
}

long long Itr_Fact(long long n) {
	long long x = 1;
	if (n == 1 || n == 0)
		return 1;
	else
		for (long long i = 1; i <= n; i++)
			x *= i;
	return x;
}
int main()
{
	// Start measuring time
	auto start = chrono::high_resolution_clock::now();

	long long n = 5;
	cout << "Number : " << n << "!" << endl;
	if (n < 0)
		cout << " Number is negative!\n";
	else
		cout << "Result = " << Itr_Fact(n) << endl;

	// Stop measuring time
	auto end = chrono::high_resolution_clock::now();

	// Calculate the duration
	auto duration = chrono::duration_cast<chrono::nanoseconds > (end - start);
	
	// Output duration
	cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

}

