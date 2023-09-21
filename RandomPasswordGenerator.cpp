#include<iostream>
#include<string>
#include<time.h>
using namespace std;

const int n=15;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char password[n];

int main(){
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)cout<<s[rand()%45];
	cout<<endl<<"Finish!";
	return 0;
} 
