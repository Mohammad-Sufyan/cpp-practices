#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long int N;
		cin>>N;
		long int A[N];
		for(int i=0;i<N;i++)
		cin>>A[i];
		long int min=0, max=N-1, M=A[N-1] + 1;
		
		for(int i=0;i<N;i++){
			if(i%2==0){
				A[i]=A[i] + ((A[max] % M) * M);
				max-- ;
				}
				else{
					A[i]=A[i] + ((A[min] % M) * M);
					min++ ;
				}
				cout<<A[i]/N<<" ";
			}
			
			cout<<endl;
		}
		return 0;
	}
			
