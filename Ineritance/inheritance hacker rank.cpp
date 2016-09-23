#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
private:
    vector<int> testScores;  
public:

    Student(string firstname,string lastname,int id,vector<int> scores):Person(firstname,lastname,id)
    {
            this->testScores=scores;
    }       
    char calculate()
    {
        int sum=0;
        char result;
        for(int i=0;i<testScores.size();i++)
        {
            sum+=testScores[i];  
        }
        int res=sum/testScores.size();
        if(res<=100 && res>=90)
        {
            result='O';   
        }
        else if(res<90 && res>=80)
        {
            result='E';
        }
        else if(res<80 && res>=70)
        {
            result='A';      
        }
        else if(res<70 && res>=55)
        {
            result='P';
        }
        else if(res<55 && res>=40)
        {
            result='D';
        }
        else if(res<40)
        {
            result='T';
        }
        return result;
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}