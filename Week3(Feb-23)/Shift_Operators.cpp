#include<iostream>
using namespace std;

int main(){
    //a<<n Left shift a by n bit (a  ->  a*2^n )
    //a>> Right shift a by 1 bit(Right shift won't devide by n)

    int a =7 ;
    int ans = (a<<2);
    cout<<ans<<endl;

//LEFT shift by 2
	int b = 7;
	int ans = (b << 2);
	cout << ans << endl;

	unsigned int c = -100;
	int ans = (c >> 1) ;
	cout << ( c >> 1);

	int d = 10;
	cout << (d << -1);

//Increment and Decrements
	int e = 21;
	cout << ++e << endl;
	//a -> 22
	cout << e++ << endl;
	//verify krte h inc hua ya nahi
	cout << e << endl;

	int f = 10;
	cout << (++f)*10 << endl;

	cout << (f++)*10 << endl;

	cout << f ;

	int a = 10;
	cout << ((a++)*(++a)) << endl;

//Break and Continue statementes
    //Break will stop the iteration after the condition
	for(int i=0; i<5; i++) {
		cout << i << endl;
		if(i == 3)
			break;
	}

    //Continue will skip the perticular Iteration in condition 
	for(int i=0; i<=5; i++) {
    if( i== 2){
        continue; 
        cout<<i<<endl;
        }
        
    }

	
	return 0;
}
