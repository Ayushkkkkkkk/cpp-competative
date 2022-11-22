#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
	virtual void askForPromotion() = 0;

};

class employee:AbstractEmployee{
private:
	string name;
	string company;
	int age;

public:
	void setName(string name_){
		name = name_;
	}
	string getName(){
		return name;
	}
	void setCompany(string company_){
		company = company_;
	}
	string getCompany(){
		return company;
	}
	void setAge(int age_){
		if(age_>=18){
		age = age_;
	}
	}
	int getAge(){
		return age;
	}
	
	employee(string name_,string company_,int age_){
		name = name_;
		company = company_;
		age = age_;
	}
	void introduce(){
		cout<<name<<endl;
		cout<<company<<endl;
		cout<<age<<endl;
	}
	void askForPromotion(){
		if(age>30){
			cout<<name<<" "<<"got promoted";
		}
		else{
			cout<<name<<" "<<"Denied";
		}
	}
	
};
class developer : employee{
public:
	
};

int main(){
	employee emp1 =employee("ayush","lauda",90);
	emp1.askForPromotion();
}