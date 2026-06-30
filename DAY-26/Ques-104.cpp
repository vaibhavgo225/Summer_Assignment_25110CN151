#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int score=0;
    string name;
    char ans;
    cout<<endl<<endl<<endl<<"============WELCOME TO MY QUIZ GAME============"<<endl<<endl<<endl;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Each question carries 1 marks with no negative marking"<<endl<<endl;

    cout<<"Ques-1 : Which language is known as the mother of modern programming languages?"<<endl;
    cout<<"A. Java\nB. C\nC. Python\nD. HTML"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='B'){
        score++;
        cout<<"Your answer is correct : C language is known as mother of all language"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : C language is known as mother of all language"<<endl<<endl;

cout<<"Ques-2 : Which symbol is used to end a statement in C++?"<<endl;
    cout<<"A. :\nB. ,\nC. ;\nD. ."<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='C'){
        score++;
        cout<<"Your answer is correct : ; symbol is used to end a statement in C++"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : ; symbol is used to end a statement in C++"<<endl<<endl;

cout<<"Ques-3 : Which loop is guaranteed to execute at least once?"<<endl;
    cout<<"A. for\nB. while\nC. do-while\nD. if"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='C'){
        score++;
        cout<<"Your answer is correct : do-while loop is guaranteed to execute at least once"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : do-while loop is guaranteed to execute at least once"<<endl<<endl;

cout<<"Ques-4 : What is the correct extension of a C++ source file?"<<endl;
    cout<<"A. .java\nB. .Cpp\nC. .c\nD. .html"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='B'){
        score++;
        cout<<"Your answer is correct :  cpp is the correct extension of a C++ source file"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong :  cpp is the correct extension of a C++ source file"<<endl<<endl;

cout<<"Ques-5 : Who is known as the father of the C programming language?"<<endl;
    cout<<"A. Dennis Ritchie\nB. Guido van Rossum\nC. James Gosling\nD. Bjarne Stroustrup"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='A'){
        score++;
        cout<<"Your answer is correct : Dennis Ritchie is known as the father of the C programming language"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : Dennis Ritchie is known as the father of the C programming language"<<endl<<endl;

cout<<"Ques-6 : Which data type is used to store decimal numbers in C++?"<<endl;
    cout<<"A. int\nB. char\nC. bool\nD. float"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='D'){
        score++;
        cout<<"Your answer is correct : float data type is used to store decimal numbers in C++"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : float data type is used to store decimal numbers in C++"<<endl<<endl;

cout<<"Ques-7 : Which operator is used to compare two values for equality?"<<endl;
    cout<<"A. =\nB. ==\nC. !=\nD. <="<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='B'){
        score++;
        cout<<"Your answer is correct : == operator is used to compare two values for equality"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : == operator is used to compare two values for equality"<<endl<<endl;

cout<<"Ques-8 : Which of the following is NOT a programming language?"<<endl;
    cout<<"A. Java\nB. Linux\nC. Python\nD. C++"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='B'){
        score++;
        cout<<"Your answer is correct : Linux of the following is NOT a programming language"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : Linux of the following is NOT a programming language"<<endl<<endl;

cout<<"Ques-9 : What does CPU stand for?"<<endl;
    cout<<"A. Central Process Unit\nB. Computer Processing Unit\nC. Central Processing Unit\nD. Control Processing Unit"<<endl<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='C'){
        score++;
        cout<<"Your answer is correct : CPU stand for Central Processing Unit"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : CPU stand for Central Processing Unit<<endl<<endl";

cout<<"Ques-10 : Which function is used to take an entire line of input in C++?"<<endl;
    cout<<"A. cin\nB. scan()\nC. getline()\nD. gets"<<endl;
    cout<< "Enter your answer : ";
    cin>> ans;
    if(toupper(ans)=='C'){
        score++;
        cout<<"Your answer is correct : getline function is used to take an entire line of input in C++"<<endl<<endl;
    }
    else
    cout<<"Your answer is wrong : getline function is used to take an entire line of input in C++<<endl<<endl";

    if(score<=3&&score>=0){
        cout<<"Your score is : "<<score<<endl<<"You need to improve study hard";
    }
    else if(score<=6&&score>=3){
         cout<<"Your score is : "<<score<<endl<<"You need to improve a bit and have a quite a knowledge about computer languages";
    }
    else if(score<=9&&score>=7){
         cout<<"Your score is : "<<score<<endl<<"You have quite good knowledge of computer languages ";
    }
    else{
         cout<<"Your score is : "<<score<<endl<<"You are exeptional";
    }
    return 0;
}