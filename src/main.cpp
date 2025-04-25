/* Amerike university
     Author: Julio López
     Date: 25/04/25
     Practice #: 24
     Description: This program shall use constructors to show data*/
 
     #include <iostream>
     using namespace std;

     class People
     {
     private:
     string Name;
     int Age;
     double Height;

     public:
     
     People(string NameX, int AgeX, double HeightX)
     {
        Name = NameX;
        Age = AgeX;
        Height = HeightX;
     }
     void setName(string Name1)
     {
        Name = Name1;
     }
     string getName()
     {
        return Name;
     }
     void setAge(int Age1)
     {
        Age = Age1;
     }
     int getAge()
     {
        return Age;
     }
     void setHeight(double Height1)
     {
        Height = Height1;
     }
     double getHeight()
     {
        return Height;
     }
    };
     int main(){
     People person1("Luis", 33, 1.77);
     People person2("Ana", 25, 1.51);
     People person3("Juan", 46, 1.83);

     cout << person1.getName() << "\n";
     cout << person1.getAge() << "\n";
     cout << person1.getHeight() << "\n";
     cout << "\n";

     cout << person2.getName() << "\n";
     cout << person2.getAge() << "\n";
     cout << person2.getHeight() << "\n";
     cout << "\n";

     cout << person3.getName() << "\n";
     cout << person3.getAge() << "\n";
     cout << person3.getHeight() << "\n";
     cout << "\n";

     return 0;
    }