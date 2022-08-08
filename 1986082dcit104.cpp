//I did it by myself
# include<iostream>
using namespace std;
void AvgOfPrimeNum(){
	int m;    int sumPrimeNumbers;   float countPrimeNumbers;   float avgPrimeNumbers;
	sumOfPrimeNumbers = 0;      countOfPrimeNumbers = 0;
	cout<<"Enter positive integer: ";
	cin>>m;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<m<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<m;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sumOfPrimeNumbers+=x;
		countOfPrimeNumbers+=1;
	    }
	}
	avgOfPrimeNumbers = sumOfPrimeNumbers/countOfPrimeNumbers;
	cout<<"The sum of the printed prime numbers above is "<<sumOfPrimeNumbers<<endl;
	cout<<"The count of the prime numbers is "<<countOfPrimeNumbers<<endl;
	cout<<"The average of the sum of the prime numbers above is "<<avgOfPrimeNumbers<<endl;
}
int main(){
	AvgOfPrimeNum();
	return 0;
}
