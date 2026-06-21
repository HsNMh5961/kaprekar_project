#include <iostream>
using namespace std;

//breaking number digits => 1234 =>[1,2,3,4]; 
void extractDigits(int num, int digits[]);

//from big to small => 3421 => [4,3,2,1];
void sortNum(int digits[]);

//Check The Kaprekar Steps 
int kaprekarStep(int num);




int main()
{
	int userNum;
	cout << "Enter Your number " <<endl;
	cout << "Your Number Should be 4 digits number "<< endl;
	cout <<"3 Digits Numbers must typed like this 423 => 0423" << endl;
	
	cin>> userNum;
	
	cout << userNum << endl;
	
	int result= userNum;
	
	
	int i=0;
	while(result != 6174 && result != 0) {
	    
	    result = kaprekarStep(result);
	    i++;
	    cout << "Level "<< i << ":"<< result<<endl;
	   
	   
	   }
	   
	   return 0;
	
	
}




void extractDigits(int num, int digits[]) {
    
    digits[0] = num / 1000 ;
    digits[1]= (num/100)  %10;
    digits[2]= (num/10) % 10;
    digits[3]= num %10;
}

void sortNum(int digits[]){
    for(int i =0; i < 4; i++){
        for (int j =i+1; j < 4; j++){
            if (digits[i] < digits[j]) {
          digits[i] = digits[i] + digits[j];
          digits[j] = digits[i] - digits[j];
          digits[i] = digits[i] - digits[j];
            }
        }
    }
}


int kaprekarStep(int num){
    
    int digits[4];
    extractDigits(num, digits);
    
    sortNum(digits);
    
    int maxNum= digits[0]*1000+ digits[1]*100+digits[2]*10+digits[3];
    
    int minNum=digits[3]*1000+ digits[2]*100+digits[1]*10+digits[0];
    
    int total = maxNum-minNum;
    
    return total;
    
}