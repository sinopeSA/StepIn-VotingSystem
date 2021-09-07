/**
 * @file studentpanel.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ELECTION.c"
void studentPanel()
{
    char userID[15];
    char voteInput;
    while (1)
    {
        printf("\n\n  To exit press 0");
        printf("\n  Enter user ID:");
        scanf("%s", userID);
        if (strcmp(userID, "0") == 0)
            return;
        if (isValid(userID) != 1)
        {
            printf("\n  Invalid User ID");
            continue;
        }
        printf("\n\n  Candidates for election:");
        for (int i = 0; i < numberOfCandidates; i++)
        {
            printf("\n  %d. %s", i + 1, candidateArray[i].cname);
        }
        printf("\n\n  Your Vote(Enter Number):");
        scanf("%s", &voteInput);
        if (voteInput - 48 < 1 || voteInput - 48 > numberOfCandidates)
        {
            printf("\nInvalid Vote\nTry Again");
            continue;
        }
        saveVote(userID, voteInput);
        printf("\n\nThanks for your precious vote");
    }
};
