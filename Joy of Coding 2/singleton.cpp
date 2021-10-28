#include <iostream>
using namespace std;

class Singleton {
	static Singleton *instance;
	int data;
	
	Singleton(){
		data = 0;
	}
	
	public:
	static Singleton *getInstance(){
		if(!instance){
			instance = new Singleton;
		}
		return instance;
	}
	
	int getData(){
		return this -> data;
	}
	
	void setData(int data){
		this -> data = data;
	}
};

Singleton *Singleton :: instance = 0;

int main(){
	Singleton *s = s -> getInstance();
	cout << s->getData() <<endl;
	s->setData(100);
	cout << s->getData() <<endl;
	Singleton *p = s -> getInstance();
	cout << p->getData() <<endl;
	return 0;
}
