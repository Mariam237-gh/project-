#pragma once 
using namespace std; 
#include<iostream> 
#include<>
#include "Queue.h"
class patient 
{
	int id;
	float arrival time;
	float appointment time; 
	string   patient type; 
	string patient name; 
	vector <Treatment > treatments; //list of required treatments 

public: 
	patient(float AT, int id, string  type, float PT, string name) {
		patient type = type; 
		appointment time = PT; 
		arrival time = AT; 
		id = id  ;
		patient name = name; 

	}
	void set_id(int id) {
		id = id; 
	}
	int get_id() {
		return id; 
	}
	void set_appointment_time ( float PT1   )
	{
		appointment_time = PT1; 
	}
	float  get_appointment_time (  ){ 
		return appointment_time; 
	}
	void set_arrival_time(float AT1) {
		arrival_time = AT1; 
	}
	float get_arrival_time() {
		return arrival_time; 
	}
	void set_patient_type(string  ptype)
	{
		if (ptype == "normal" || ptype == "recovering ")
		{patient_type = ptype;
	}
		else {
			cout << "Invalid patient type. " << endl;
			} 
	}

	 string  get_patient_type() {
		return patient_type; 
	}

	// treatment class will contain two data members :
	// treatment name and duration how long the treatments lasts +display function prints all treatments associated with the patient 
	//void addTreatment(const Treatment& treatment) {
	//	requiredTreatments.push_back(treatment);
//	}
	//void displayTreatments()const {
	//	cout << "Patient : " << Patient  name << " ,ID:" << id << endl;
		//cout << "Required Treatments : \n";
		//for (const auto& treatment : treatments) {
			// treatment.displayTreatment  ();
		// }
	// }



};