#include<bits/stdc++.h>
using namespace std;
// Define a class "Rectangle" that takes length and width of rectangle from keyboard
class Rectangle {
private:
  int length;
  int width;

public:
  // A method to initialize length and width.
  void initialize(int l, int w) {
    length = l;
    width = w;
  }

  // A method to display length and width.
  void display() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
  }

  // A method to return the diagonal of the rectangle.
  double getDiagonal() {
    return sqrt(length * length + width * width);
  }

  // A method to display area of the rectangle.
  void displayArea() {
    cout << "Area: " << length * width << endl;
  }
};

int main() {
  // Create a Rectangle object.
  Rectangle r;

  // Get the length and width from the user.
  int length, width;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the width of the rectangle: ";
  cin >> width;

  // Initialize the Rectangle object.
  r.initialize(length, width);

  // Display the length and width of the rectangle.
  r.display();

  // Calculate and display the diagonal of the rectangle.
  double diagonal = r.getDiagonal();
  cout << "Diagonal: " << diagonal << endl;

  // Calculate and display the area of the rectangle.
  r.displayArea();

  return 0;
}
