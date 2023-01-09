//check the consept of public,private and protected data types in c++.

#include<iostream>
using namespace std;

class Base
{
	public:
	     int i;
	private:
         int j;
    protected :
         int k;
    public:
         Base()
		 {
			 i=10;
			 j=20;
			 k=30;
		 }	                        

         void fun()
		 {
			 cout<<" value of public i :"<<i<<"\n";     // we can acces the public data in its class as well as out side of the class.
			 cout<<" value of private j :"<<j<<"\n";    // we can acces the private data in its class only.
			 cout<<" value of  protected k :"<<k<<"\n"; // we can acces the protected data in its class only.
			 
		 }		 
};



int main()
{
	Base bobj;
	
	cout<<"value of public i:"<<bobj.i<<"\n";           // we can acces the public data by calling base class object.
	//cout<<" value of private j :"<<bobj.j<<"\n";      // we can't acces the private data out side of its class. so, the syntax like this give the error. 
	//cout<<" value of  protected k :"<<bobj.k<<"\n";    // we can't acces the protected data out side of its class. so, the syntax like this give the error.
	
	bobj.fun();
			 
	
	return 0;
}