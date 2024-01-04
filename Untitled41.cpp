#include <iostream>

using namespace std;

int main()
{
	int a[7] = {3,7,2,8,9,1,6};
	
	int as1 = a[0];
	int as2 = a[1];
	int as3 = a[2];
	for(int i=1; i<7; i++){
		if(as1<a[i]){
			as3 = as2;
			as2 = as1;
			as1 = a[i];
		}
		else if(as2<a[i]){
			as3 = as2;
			as2 = a[i];
		}
		else if(as3<a[i]){
			as3 = a[i];
		}
	}
	cout << "En buyuk uc sayi: " << as1 << "," << as2 << "," << as3 << endl;
	cout << "En buyuk uc sayinin toplami: " << as1+as2+as3 << endl;
	
}