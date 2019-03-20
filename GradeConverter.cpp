#include <iostream>
#include <string>
using namespace std;
	
int main()
{
	float InputGrade; //Variale for the input of a grade
	float GradeConversionRate; //Conversion rate for input grade
	float ConvertedGrade; //Variable for the ouput grade after conversion
	
    cout << "Please enter the grade conversion rate:" << endl << "     ";
    cin >> GradeConversionRate;
    if (GradeConversionRate > 0 )
    {
    	while (InputGrade >= 0 )
    	{
       		cout << "Please enter the grade to be converted:" << endl << "     ";
       		cin >> InputGrade;
       		if (InputGrade >= 0)
       		{
       			cout << endl;
       			cout << "Converted grade: " << InputGrade*GradeConversionRate << endl;
       		}
       }
       cout << "You have chosen to end this session. Thank you!" << endl << endl;
    }
    else
       	cout << "You have chosen to end this session. Thank you!" << endl << endl; 
return 0;
}
