#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here:

 int
 float
 char
 bool
 double
 void
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int pillsLeft = 4;
    int fingerCount = 10;
    int candy= 3;
    float timeElapsed = 3.8f;
    float temperatureNow = 25.3f;
    float velocity = 86.5f;
    char answer = 'C';
    char modelType = 'a';
    char size = 'b';
    bool hasMoney = false;
    bool isHealthy = true;
    bool canEat = false;
    double threshold = 3.14e2;
    double tolerance = 0.03;
    double roadLength = 94.004;
    
    ignoreUnused(number, pillsLeft, fingerCount, candy, timeElapsed, temperatureNow, velocity, answer, modelType, size, hasMoney, isHealthy, canEat, threshold, tolerance, roadLength); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool hasMoney(double income, double outcome)
{
    ignoreUnused(income, outcome);
    return {};
}

/*
 2)
 */
int apple(int momBuys = 12, int dadBuys = 46)
{
    ignoreUnused(momBuys, dadBuys);
    return {};
}

/*
 3)
 */
double fenceLength(double onFront, double onLeft = 13.9, double onRight = 12.07)
{
    ignoreUnused(onFront, onLeft, onRight);
    return {};
}

/*
 4)
 */
bool getJob(int yearsExp, int skillCount)
{
    ignoreUnused(yearsExp, skillCount);
    return {};
}

/*
 5)
 */
double score(int problem = 40, int correct = 0, int wrong = 0)
{
    ignoreUnused(problem, correct, wrong);
    return {};
}

/*
 6)
 */
char results(double testScore = 0, bool isQualified = false)
{
    ignoreUnused(testScore, isQualified);
    return {};
}

/*
 7)
 */
void washDishes(int plate, int cup, int spoon)
{
    ignoreUnused(plate, cup, spoon);
}

/*
 8)
 */
double cubeVolume(int sideLength)
{
    ignoreUnused(sideLength);
    return {};
}

/*
 9)
 */
void driveCar(int carType, int passenger = 3, bool bigLuggage = false)
{
    ignoreUnused(carType, passenger, bigLuggage);
}

/*
 10)
 */
int weekCount(int daysToGo)
{
    ignoreUnused(daysToGo);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto buy = hasMoney(250.99, 87.99);
    //2)
    auto appleCount = apple(3, 9);
    //3)
    auto fence = fenceLength(5.6, 8.7);
    //4)
    auto status = getJob(3, 6);
    //5)
    auto test = score(40, 35, 5);
    //6)
    auto decision = results(86, true);
    //7)
    washDishes(4, 7, 6);
    //8)
    auto cubeVol = cubeVolume(13);
    //9)
    driveCar(4, 6, false);
    //10)
    auto howManyWeeks = weekCount(78);
    
    ignoreUnused(carRented, buy, appleCount, fence, status, test, decision, cubeVol, howManyWeeks);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
