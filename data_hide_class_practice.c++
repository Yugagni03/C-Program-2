#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int breadth;
	public:
        void setlength(int l){
        	if(l>0){
        		setlength = l
			}
			else{
				setlength = 1;
			}
		}			
		void setbreadth(int b){
			if(b>0){
				setbreadth=b;
			}
			else{
				setbreadth=1;
			}
		}
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length+breadth);
		}
};
int main()
{
	rectangle r1,r2;
	r1.len(4);
	r1.bre(6);
	cout<<r1.area();
	cout<<r1.perimeter();
	
	r2.len(7);
	r2.bre(3);
	cout<<r2.area();
	r2.perimeter();
	return 0;
}
