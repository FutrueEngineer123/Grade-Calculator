


// Updates: Add a total length so it can be updated by user
// ie. allow the user to type how many classes they have for avg

#include <stdio.h>

int main(void) {
 
    // Introduction
    printf("____________________________________________\n");
    printf("\n");
    printf("Welcome to Yams Grades!!\n");
    printf("____________________________________________\n");
    printf("\n");

 
    // Declare double not necessary to define
    double hw_per, lab_per, quiz_per, m_per, proj_per, f_per; // weights
    double hw, labs1, quizzes, midterm, project, final; // assignments
    double hw_total, lab_total, quiz_total, m_total, proj_total, f_total; // totals
    
    
    //# define final_grade;
    
    /*
    Get user percentages for assignments (len 6)
    Possibly use a for loop to get the user input for the len?
    Set i = 0 and have the user enter the number of weighted assignments
    have a loop go through for each time and ask the user for the input till i is equal to len
    each loop add 1 to i 
    */
    printf("enter the percentage of hw ");
    scanf(" %lf", &hw_per);
    
    printf("enter the percentage of lab ");
    scanf(" %lf", &lab_per);
    
    printf("enter the percentage of quizzes ");
    scanf(" %lf", &quiz_per);
    
    printf("enter the percentage of exams ");
    scanf(" %lf", &m_per);
    
    printf("enter the percentage of project ");
    scanf(" %lf", &proj_per);
    
    printf("enter the percentage of final ");
    scanf(" %lf", &f_per);

    
    
    // User grades
    printf("hw: ");
    scanf("%lf / %lf", &hw, &hw_total); 
    
    printf("labs: ");
    scanf("%lf / %lf", &labs1, &lab_total);
    
    printf("quizzes: ");
    scanf("%lf / %lf", &quizzes, &quiz_total);
    
    printf("midterm: ");
    scanf("%lf / %lf", &midterm, &m_total);
    
    printf("project: ");
    scanf("%lf / %lf", &project, &proj_total);

    printf("final: ");
    scanf("%lf / %lf", &final, &f_total);
    
    /*
    // Final output
    printf("Final Course Grade: %lf", ((hw / hw_total * hw_per) + (labs1 / lab_total * lab_per) +
                                   (quizzes  / quiz_total * quiz_per) + (midterm / m_total * m_per) + 
                                   (project / proj_total * proj_per) + (final / f_total * f_per)));
                                    
    */
    
    double final_grade;
    char result[50];

    final_grade = ((hw / hw_total * hw_per) + (labs1 / lab_total * lab_per) +
                  (quizzes  / quiz_total * quiz_per) + (midterm / m_total * m_per) + 
                  (project / proj_total * proj_per) + (final / f_total * f_per)); 


    //sprintf(result, "%.3f", final_grade);
    printf("your final grade is %.2lf\n", final_grade);
    
    
    return 0;
    
}





