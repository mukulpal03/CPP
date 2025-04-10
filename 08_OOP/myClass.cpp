#include <iostream>
#include<vector>  // user defined datatype
using namespace std;

class Chai {   // public and private - access modifiers
    public:   // sab instance ko access hoga
        // data members (attributes) - class ke andar bnaye variables
        string tea_name;
        int servings;
        vector<string> ingredients;  // datatype and the value in the list should be a string

        // Member function

        void display_chai_details () {
            cout << "Tea Name: " << tea_name << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";

            for(string ingredient: ingredients){
                cout << ingredient << endl;
            }
        }

    private:   // sirf class ke andar hi access kar sakte
        string name;
};

int main()
{
    Chai chai;

    chai.tea_name = "lemon tea";
    chai.servings = 2;
    chai.ingredients = {"water", "lemon", "honey", "tea"};

    chai.display_chai_details();

    return 0;
}