#include <iostream>
#include <string>

class MultipleChoiceTest
{
  public:
    MultipleChoiceTest(int questionsCount)
    {
      this->questionsCount = questionsCount;
      answers = new int[questionsCount];
      for (int i = 0; i < questionsCount; i++)
      {
        answers[i] = -1;

      }

    }

    void setAnswer(int questionIndex, int answer)
    {
      answers[questionIndex] = answer;

    }

    int getAnswer(int questionIndex) const
    {
      return answers[questionIndex];

    }

    virtual ~MultipleChoiceTest(){
      //destructor, deallocate memory
      delete[] answers;
    }

  protected:
    int questionsCount;

  private:
    int* answers;

};

class TimedMultipleChoiceTest : public MultipleChoiceTest
{
  public:
    TimedMultipleChoiceTest(int questionsCount)
      : MultipleChoiceTest(questionsCount)
    {
      times = new int[questionsCount];
      for (int i = 0; i < questionsCount; i++)
      {
        times[i] = 0;

      }

    }

    void setTime(int questionIndex, int time)
    {
      times[questionIndex] = time;

    }

    int getTime(int questionIndex) const
    {
      return times[questionIndex];

    }

    ~TimedMultipleChoiceTest()
    {
      //destructor, deallocate memory
      delete[] times;
    }

  private:
    int* times;

};
