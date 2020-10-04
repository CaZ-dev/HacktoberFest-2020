#include<iostream> 
using namespace std; 
class myClass 
{ 
	public: 
	int rollno; 
	float age; 
	char grade; 

	myClass (int rn, float ag, char g) 
	{ 
		rollno = rn; 
		age = ag; 
		grade = g; 
	} 

	void operator ++ (int) 
	{ 
		rollno = rollno + 1; 
		age = age + 1; 
		grade = grade + 1; 
	} 
}; 

int main() 
{ 
	myClass obj(6, 18.0, 'C'); 
	cout<<"Before overloading the values of variables are: \n"; 
	cout<<obj.rollno<<endl<<obj.age<<endl<<obj.grade; 
	obj++; 

	cout<<"\nAfter overloading the values of variables are: \n"; 
	cout<<obj.rollno<<endl<<obj.age<<endl<<obj.grade; 
	return 0; 
}
