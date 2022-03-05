//알고리즘 트레이닝 프로그래밍 입문 가이드
//1~4장 

#include<bits/stdc++.h> //iostream, algorithm, vector 등을 포함

using namespace std; 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	//string x;
	while (cin >> a) {
		cout << a<<'\n';
	}
	/*getline(cin, x);
	cout << x.length() <<x;*/


	//1.
	//cin>>a>>b>>x; 
	//123 456 monkey 뿐만 아니라 
	// 
	//123 456
	//monkey
	//의 입력도 받을 수 있음


	//2.
	//공백을 포함한 채 한 줄을 입력받아야 한다면
	// 
	// 그냥 cin을 쓰면 모든 공백이 사라짐
	// ex) input) ____asdf____   (_ = 공백)
	// ->  x.length() = 4
	// 
	//getline(cin,x);를 사용하면
	//x.length() = 12


	//3.
	//만일 데이터의 양을 사전에 알 수 없다면
	//while(cin>>x){}를 사용


	//4.
	//ios::sync_with_stdio(0);// 입출력이 조금 더 빨라짐
	//cin.tie(0);// 입출력이 조금 더 빨라짐


	//5. 시간 복잡도 O()
	//
	//
	//
	//
	//
	//

}
