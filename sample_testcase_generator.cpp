#include <bits/stdc++.h>
#include <thread>
using namespace std;

#define ll long long

const int mxN=10; // number of test casese

// swap for mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count()) if you want a faster but less random rng
random_device rng;
inline ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(rng);
}

string in="input/input00.txt", out="output/output00.txt";

const int mxE=1e6;

void create(){
	// Creating files
	ofstream input(in);
	ofstream output(out);
	
	// Making test cases (Example is addition of 2 numbers) 
	int x=randint(0,1e9), n=randint(0,1e9);
	input << x << ' ' << n;
	output << x+n; // x+n is our ans and put inside output file
	// output can also be done separately on diff file after all input is done incase if size is too large
	
	input.close();
	output.close();
}

int32_t main(){
	if(mxN>=100){
		printf("Number of test cases must not be over 99!\nNo changes made to files.\n");
		return 0;
	}
	// Sample test case
	// ofstream input(in);
	// ofstream output(out);

	// input << "6 3\n100 200 50 1 -100 200\n1 5\n2 5\n3 6";
	// output << "250";

	// input.close();
	// output.close();

	for(int i=0; i<mxN; ++i){  
		string n=to_string(i);
		if(i<10){ // for file formatting
			in[11]='0';
			in[12]=n[0];
			out[13]='0';
			out[14]=n[0];
		}
		else {
			in[11]=n[0];
			in[12]=n[1];
			out[13]=n[0];
			out[14]=n[1];
		}
		create();
        	printf("Finished testcase #%d\n", i);
		// additional sleep cuz test cases might repeat if generated too fast
        	std::this_thread::sleep_for(std::chrono::microseconds(500000));
	}
	printf("Done!\n");
}
