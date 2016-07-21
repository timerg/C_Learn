// 2 Q: Ln12, Ln38(28)
#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);

    long universe_of_defects = 1024L;     /* I do follow the instruction to overload it. But the max num it gave ~= -9,223,372,036,854,775,807
                                                                                                                              but =  -8,206,744,073,709,551,616 */
    printf("The entire universe has %ld bugs.\n",
            universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n",
            expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",
            part_of_universe);

    // this makes no sense, just a demo of something weird
    char nul_byte = '\0';               // this is a 'nul byte' character. This is effectively the number 0
    int bugs_ = 3;
    int care_percentage = bugs_ *  nul_byte;         /* if replace * with /: "Floating point exception: 8".
                                                    About this statement, it only happens at this situation(Intger devided by 0) and a few other division related operations.
                                                    It's because the task is impossible to be done by Float */
    printf("Which means you should care %s%%.\n",  /* Its interesting that Cahr can be multiplied with Int
                                                      Note: Char can't be multiplied with Float */
            care_percentage);

    return 0;
}



// Change Ln28 %d -> %c seems nothing happen when using valgrind. This doesn't follow the Ex7.