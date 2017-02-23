#Reflection 2

##Sprint Reflection
My learning goal is to be proficient at C programming, and learn about computer graphics. And our team's goal is to focus more on our project, while doing exercises 
with our own time. During this sprint, I think we did better than before, but sometimes we are still not on the same page about our project.
We had a lot of communications through messenger, but it was hard for us to meet at the same time especially during the president's day weekend. 
Additionally, team members were working on different parts of ray-tracing which also gave us a roadblock that sometimes it was hard to complete
work that depends on other's work. To improve our work as a team, we are planning to do more pair programming and have more meetings.

## Links to exercises: 
[Exercise 3](../exercises/ex03)
[Exercise 4](../exercises/ex04)

## Links to reading questions: 
[Reading questions](../reading_questions/thinkos.md)

## Exam question:

Write a piece of code that contains variables stored in static, stack, and heap segments.
### Answer:
(simple code)
```C
  int globalVar;
  int main(){
    int static localVar;
    int x = 0;
    void *p = malloc(128);
  }
```
