#include<iostream>
using namespace std;
class Add {
public:
	
	
    int a, b;

    void input() {
        cin >> a >> b;
    }

    void sum() {
        cout << "Sum = " << a + b;
    }

};
int main(){
	Add obj;
	obj.input();
	obj.sum();
	return 0;
}
