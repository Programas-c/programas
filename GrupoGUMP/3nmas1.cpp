#include <iostream>

using namespace std;
int main() {
	int n=0, XCInterno, YBandera, ZMaximo, a, b, banderain, aAux, bAux;
	
	while(cin>>a>>b){
		aAux = a;
		bAux = b;
		if(a>b){
			banderain = a;
			a = b;
			b = banderain;
		}
		ZMaximo=0;
		for(int i=a;i<=b;i++) {
			n = i;
			for(XCInterno=1; XCInterno>=1;XCInterno++) {
				if(n>1) {
					if(n%2!=0){
						n=(3*n)+1;
					} else {
						n = n/2;
					}
				} else {
					YBandera = XCInterno;
					break;
				}
			}
			if(YBandera>ZMaximo)
				ZMaximo = YBandera;
		}
		cout<<aAux<<" "<<bAux<<" "<<ZMaximo<<endl;
	}
}
