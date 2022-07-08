/*Write a C++ program to calculate the tuition fee for a student at a University. The program
should prompt for and accept the idnumber and the total number of credits for which he/she
has enrolled. The bill outputted should contain the idnumber and tuition fee.
Calculate the tuition fee as follows:
• Total credits of 15 or more indicates that the student is full-time. Full-time students pay a
flat rate of $35,000 for tuition.
• Total credits of less than 15 indicate that the student is part-time. Part-time students pay
$850 per credit for tuition.
After printing the tuition fee, ask the user if s/he wants to calculate the tuition fee for another
student – “Y” for yes and “N” for no. (This question is asked each time the tuition fee is printed).
If s/he does, allow him/her to enter another student’s idnumber and total number of credits and
find the tuition fee again. If the answer is no, the program must be terminated with an
appropriate message. (Please ensure that you include a check to determine if an invalid
character is entered).*/
#include<iostream>
using namespace std;
class Student{
public:
string regNo;
int noOfcredits;
double tBill;
string status1 = "Full-time";
string status2 = "Part-time";
string answer;
};
int isBool(string answer){
if(answer == "yes" || answer == "Yes"){
return true;
}else if(answer == "no" ||answer == "No" ){
return false;
}
}

int main()
{
Student stud1,stud2;
stud1.regNo;
cout << "Enter registration number: " ;
getline(cin, stud1.regNo);
stud1.noOfcredits;
cout << "Enter number of credits: " ;
cin >> stud1.noOfcredits;
isBool(stud1.answer);
stud1.tBill;
if(stud1.noOfcredits > 15){
cout << "Status: "<< stud1.status1 ;
cout << "\nTution fee: $35,000 ";
cout << "\nCalculate tution fee for another student? ";
cin >> stud1.answer;
}else{
cout << "Status: "<< stud1.status2 ;
stud1.tBill = 850 * stud1.noOfcredits;
cout << "\nTution fee: $" << stud1.tBill;
cout << "\nCalculate tution fee for another student? ";
cin >> stud1.answer;
}

stud2.status2;
stud2.noOfcredits;
stud2.status1;
stud2.status2;
stud2.tBill;

int i;
stud2.regNo;
while(stud1.answer == "yes" && i < 50){
cout << "\nEnter registration number: " ;
cin >> stud2.regNo;
cout << "Enter number of credits: ";
cin >> stud2.noOfcredits;
if(stud2.noOfcredits > 15 ){
cout << "Status: "<< stud2.status1 ;
cout << "\nTution fee: $35,000 ";
cout << "\nCalculate tution fee for another student? ";
cin >> stud1.answer;
}else{
cout << "Status: "<< stud1.status2 ;
stud2.tBill = 850 * stud2.noOfcredits;
cout << "\nTution fee: $" << stud2.tBill;
cout << "\nCalculate tution fee for another student? ";
cin >> stud1.answer;
}
i++;
}
cout << "\nThank you, have a nice time";

return 0;
}