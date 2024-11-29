#include<iostream>
using namespace std;

int main(){
	int n[100];
	int i = 1;
	int a = 0;
	while(i==1){
        cout << "Enter an integer: ";
    
	    cin >> n[a];
        
	
	     if (n[a]==0){i++;}
	
		    else{a++;}
	}

    i = 0;
	int even=0;
	int odd=0;
	
	while(i<a){
	if (n[i] %2 == 0){even++;}

	else   {odd++;}
	
    i++;
    }

    
	cout << "#Even numbers = "<< even <<"\n";
    cout << "#Odd numbers = "<< odd << "\n";
    return 0;
}