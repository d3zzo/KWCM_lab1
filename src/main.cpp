#include <cmath>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#endif
#include "trygonometria.h"
#include <iostream>
using namespace std;

int main() 
{
	double angle = 45;
	double angleRadian = 0.8;
	#ifdef USE_TRIGONOMETRY_DEGREE
		cout<<degreemath::sin(angle)<< endl;
		cout<<degreemath::cos(angle)<< endl;
		cout<<degreemath::tan(angle)<< endl;
		cout<<degreemath::ctg(angle)<< endl;
	#else
		cout<<sin(angleRadian)<< endl;
		cout<<cos(angleRadian)<< endl;
		cout<<tan(angleRadian)<< endl;
		cout<<1/tan(angleRadian)<< endl;

	#endif

	cout<<degreemath::sin(angle)<< endl;
	/*...*/ return 0; 
}\