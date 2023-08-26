//  Check number is palindrome or not

#include<iostream>
using namespace std;
int main(){
	
	int num, temp, reminder, reverse=0;
	
	cout<<"Enter a nuber to check Palindrome: ";
	cin>>num;
	
	temp = num;
	
	while (temp != 0){
	
     reminder = temp % 10;
	reverse = reverse * 10 + reminder;
	temp /= 10;
}
	if (num==reverse){
		cout<<endl<<"Your number is palindrome";
}

else {
	cout<<"Your number is not palindrome";
}	
	return 0;
	
}
