#include <iostream>
using namespace std;

enum entype { dog, cat, bird };

struct animal
{
	string name;
	short age;

};

int main()
{
	animal animal1;
	animal1.name ="Rex";
	animal1.age = 3;

	entype type;
	type = entype::dog;

	cout << "type: "<< (type == dog ? "dog" :type == cat ? "cat" :"bird")<< endl;
	cout << "name:" << animal1.name << endl;
	cout << "age:" << animal1.age << endl;


	return 0;





 


}

