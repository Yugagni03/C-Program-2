#include<iostream>
using namespace std;
class employee{
	private:
		int id;
		string name;
	public:
		employee(int i, string n){
			id=i;
			name=n;
		}
		int getid(){
			return id;
		}
		string getname(){
			return name;
		}
			
};
class fulltimeemployee:public employee{
	private:
		int salary;
	public:
	    fulltimeemployee(int i, string n , int s):employee(i,n){
	    	salary=s;
		}		
		int getsalary(){
			return salary;
		}
};
class parttimeemployee:public employee{
	private:
		int wage;
    public:
    	parttimeemployee(int i, string n, int w):employee(i,n){
    		wage=w;
		}
		int getwage(){
			return wage;
		}
		
};
int main(){
	fulltimeemployee p1(12,"john",30000);
	parttimeemployee p2(2,"krish",4000);
	cout<<"salary of "<<p1.getname()<<" is "<<p1.getsalary()<<endl;
	cout<<"daily wage of "<<p2.getname()<<" is "<<p2.getwage()<<endl;
	return 0;
}
