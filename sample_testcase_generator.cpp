#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=5; // number of test casese
const int mxT=1e6, mxL=1e6; // our constraints

// swap for mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count()) if you want a faster but less random rng
random_device rng;
inline ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(rng);
}

string in="input/input00.txt", out="output/output00.txt";

void create(){
	// Creating files
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
	if(mxN>=100){
		printf("Number of test cases must not be over 99!\nNo changes made to files.\n");
		return 0;
	}
	// Sample test case
	ofstream input(in);
	ofstream output(out);

	input << "input";
	output << "output";

	input.close();
	output.close();

	for(int i=1; i<=mxN; ++i){  
		string n=to_string(i);
		if(i<10){ // for file formatting
			in[12]=n[0];
			out[14]=n[0];
		}
		else {
			in[11]=n[0];
			in[12]=n[1];
			out[13]=n[0];
			out[14]=n[1];
		}
		create();
	}
	printf("Done!\n");
}
