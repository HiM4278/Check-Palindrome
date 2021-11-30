#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
	string reverse = func1(text);
    cout << "Reversed text: "<<  reverse << endl;
	string text2 = func2(text);
	string text3 = func2(reverse);
	

	if (text3 == text2)
		{
		cout << "Palindrome: Yes";
		}	else{
			cout << "Palindrome: No";
			}
	
    return 0;
}
