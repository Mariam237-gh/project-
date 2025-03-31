#pragma once
using namespace std; 
#include<iostream >
class resource
{ private: 
	int ID; 
	int count; 
	string  rsrctype ; 
	int capacity; 
public: 
	resource(int id, string   rtype, int c , int cap ) {
		ID = id; 
		rsrctype= rtype; 
		count = c; 
		capacity = cap; 
	}
	void set_ID(int  i) {
		ID = i; 
	}
	int get_ID() {
		return ID; 
	}
	void set_rsrctype(string  rtype) {
		if (rtype ==  "E - device" || rtype == "U - device" || rtype == "gym room ") {
			rsrctype = rtype; 
		}
		else {
			cout << " invalid resource type " << endl; 
		}
	}
	 string  get_rsrctype() {
		return rsrctype; 
	}

     void set_capacity( int capx  )
	 {
		 capacity = capx;
		 if (rsrctype != "gym room ") { capx = 1;  }
		
	 }

	 int get_capacity() { return capacity; }

	 void set_count(int cn) { count = cn;  }
	 int get_count() {
		 return count; 
	 }
	 bool isavailable() {
		 if (rsrctype == "gym room ")
		 {
			 return capacity > 0; //gym is available 
		 }
		 else {
			 return count > 0;  //other resources is available 
		 }
	 }
};

