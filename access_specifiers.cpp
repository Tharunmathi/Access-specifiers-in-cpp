/*# include <iostream>
using namespace std;
class Myclass{
    public:
    int x;
    private:
    int y;

};
int main(){
    Myclass m1;
    m1.x = 25;
    //m1.y = 30;
    cout <<m1.x<<endl;
    return 0;
}
class Employee {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       Employee(int id, string name, float salary)    
        {    
             this->id = id;    
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static float rateOfInterest;   
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<accno<<" "<<name<< " "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
    Account a2=Account(202, "Nakul"); //creating an object of Employee  
    a1.display();    
    a2.display();    
    return 0;  
}  
//                                "ENCAPSULATION"
// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
#include <iostream>
using namespace std;
class Baseclass{
    public:
    int x;
    Baseclass(){
        x= 5;
        y = 5;
        z = 5;
    }
    void print(){
        cout<<"Y:"<<y<<endl;
    }
    private:
    int y;
    protected:
    int z;

};
void Myoutsidefunction(Baseclass b1){
    cout<<b1.x<<endl;
    //cout<<b1.y<<endl;
    //cout<<b1.z<<endl;
}
int main(){
    Baseclass b2;
    Myoutsidefunction(b2);
    b2.print();
    return 0;
}*/
/*#include <iostream>  
using namespace std;

class Line
{
public:
double length;
void setLength( double len );  
double getLength( void );
};

double Line::getLength(void)
{
return length ;
}

void Line::setLength( double len )
{
length = len;
}
// Main function for the program

int main(){
Line line;
// set line length  line.setLength(6.0);
cout << "Length of line : " << line.getLength() <<endl;
// set line length without member function
line.length = 10.0; // OK: because length is public  
cout << "Length of line : " << line.length <<endl; 
return 0;
}*/
#include <iostream>
using namespace std;  
class Box{
public:
double length;
void setWidth( double wid );  
double getWidth( void );
private:
double width;
};

// Member functions definitions  
double Box::getWidth(void){
return width;}
void Box::setWidth( double wid ){
width = wid;}
// Main function for the program  
int main(){
Box box;
// set box length without member function 
 box.length = 10.0; // OK: because length is public  
 cout << "Length of box : " << box.length <<endl;

// set box width without member function
// box.width = 10.0; // Error: because width is private 
 box.setWidth(10.0); // Use member function to set it.  
 cout << "Width of box : " << box.getWidth() <<endl;
return 0;
}
