#include <bits/stdc++.h>
using namespace std;

class department
{
protected:
    string name49;
    int nost49;
    int notc49;

public:
    department() {}

    virtual void equipment_Index() = 0; 

    void display() const
    { 
        cout << "Name: " << this->name49 << endl;
        cout << "Total Teachers=" << this->notc49 << endl;
        cout << "Total Students=" << this->nost49 << endl;
    }

    virtual int total() const = 0;
};

class EEE : public department
{
protected:
    int nomt49;

public:
    EEE(string str, int num1, int num2, int num3)
    {
        this->name49 = str;
        this->notc49 = num1;
        this->nost49 = num2;
        this->nomt49 = num3;
    }

   
    void equipment_Index()
    {
        try
        {
            if (this->nost49 == 0)
            {
                throw "Division by zero error!";
            }
            float x = (1.0)*this->nomt49 / this->nost49;
            cout << "Machine index=" << x << endl;
        }
        catch (const char *e)
        {
            cout << "Error: " << e << endl;
        }
    }

    void display()
    {
        department::display(); 
        cout << "Total Machines=" << this->nomt49 << endl;
        equipment_Index();
    }

    int total() const
    {
        return this->nomt49;
    }
};

class CSE : public department
{
protected:
    int ncmt49;

public:
    CSE(string str, int num1, int num2, int num3)
    {
        this->name49 = str;
        this->notc49 = num1;
        this->nost49 = num2;
        this->ncmt49 = num3;
    }

    
    void equipment_Index()
    {
        try
        {
            if (this->nost49 == 0)
            {
                throw "Division by zero error!";
            }
            float x = (1.0)*this->ncmt49 / this->nost49;
            cout << "Machine index=" << x << endl;
        }
        catch (const char *e)
        {
            cout << "Error: " << e << endl;
        }
    }

    void display()
    {
        department::display(); 
        cout << "Total Computers=" << this->ncmt49 << endl;
        equipment_Index();
    }

    int total() const
    {
         return this->ncmt49;
    }
};

class ECE : public department
{
protected:
    int ncmt49;
    int nomt49;

public:
    ECE(string str, int num1, int num2, int num3, int num4)
    {
        this->name49 = str;
        this->notc49 = num1;
        this->nost49 = num2;
        this->nomt49 = num3;
        this->ncmt49 = num4;
    }

    
    void equipment_Index()
    {
        try
        {
            if (this->nost49 == 0)
            {
                throw "Division by zero error!";
            }
            float x = (1.0)*(this->nomt49 + this->ncmt49) / this->nost49;
            cout << "Machine index=" << x << endl;
        }
        catch (const char *e)
        {
            cout << "Error: " << e << endl;
        }
    }

    void display()
    { 
    department::display();
        cout << "Total Machines=" << this->nomt49 << endl;
        cout << "Total Computers=" << this->ncmt49 << endl;
        equipment_Index();
    }

    int total() const
    {
        return this->nomt49 + this->ncmt49;
    }
};

int main()
{
    EEE eee("EEE", 50, 1000, 50);
    CSE cse("CSE", 30, 1200, 200);
    ECE ece("ECE", 30, 1200, 25, 100);
    eee.display();
    cse.display();
    ece.display();
    cout << "Total equipments=" << eee.total() + cse.total() + ece.total() << endl;
    cout << "End of Program" << endl;
    return 0;
}
