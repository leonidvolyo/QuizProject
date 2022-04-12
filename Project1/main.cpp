#include <iostream>
#include "Source.cpp"

using namespace std;

int main()
{
	Question* num = new Question[];
	num[0].title = "What is cycle?";
	num[0].a = "if";
	num[0].b = "for";
	num[0].c = "__init__()";
	num[0].answer = 'b';
	num[1].title = "What does <if> mean?";
	num[1].a = "Comparison";
	num[1].b = "Condition";
	num[1].c = "Move to next iteration";
	num[1].answer = 'b';
	num[2].title = "What does <continue> mean?";
	num[2].a = "Return to previous iteration";
	num[2].b = "Comparison";
	num[2].c = "Moving to next iteration";
	num[2].answer = 'c';
	num[3].title = "What does <break> mean?";
	num[3].a = "Exit cycle";
	num[3].b = "Moving to next iteration";
	num[3].c = "Return to previous iteration";
	num[3].answer = 'a';
	num[4].title = "What does <goto> mean?";
	num[4].a = "Exit cycle";
	num[4].b = "Restart program";
	num[4].c = "Jump to specific row of code";
	num[4].answer = 'c';
	short corrects = 0;
	char userAnswer;
	for (int i = 0; i < 5; i++)
	{
		cout << num[i].title << endl << "a) " + num[i].a << endl << "b) " + num[i].b << endl << "c) " + num[i].c << endl << "Ваш ответ: ";
		cin >> userAnswer;
		if (userAnswer == num[i].answer)
		{
			corrects++;
			cout << "Correct!\n";
		}
		else
		{
			cout << "Incorrect!\n";
		}
	}
	cout << "You got that many correct answers: " << corrects << endl;
	delete[] num;
}