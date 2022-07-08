#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=5; // number of test casese
const int mxT=1e6, mxL=1e6; // our constraints

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
inline ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(mt_rng);
}

void create(string n){
	// Creating files
	string in="input/input";
	in+=n;
	in+=".txt";

	string out="output/output";
	out+=n;
	out+=".txt";

	ofstream input(in);
	ofstream output(out);
	
	// Making test cases (Example is addition of 2 numbers) 
	int a=randint(1,mxL), b=randint(1,mxL);
	input << a << ' ' << b;
	// Solve for output using solution
	output << a+b;
	
	input.close();
	output.close();
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// Sample test case
	ofstream input("input/input00.txt");
	ofstream output("output/output00.txt");

	input << "input";
	output << "output";

	input.close();
	output.close();

	for(int i=1; i<=mxN; ++i){  
		string filename;
		if(i<10){ // for file formatting
			filename.push_back('0'); // 01 instead of 1, 06 instead of 6
		}
		filename+=to_string(i);

		create(filename);
	}
}
