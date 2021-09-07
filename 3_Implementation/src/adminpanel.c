/**
 * @file adminpanel.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "ELECTION.c"


void adminPanel()
{
    while (1)
    {
        if (authenticateAdmin() != 1)
        {
            printf("\n Wrong Username or Password \n");
            break;
        }
        printf("\n\nLOGGED IN SUCCESSFULLY");
        while (1)
        {
            char inputID[15];
            char input;
            char banInp;
            int WinnerCid, totalVotedNow = 0;
            printf("\n1.New Election\n2.Continue Previous Election\n3.Result\n4.Logout\nOption:");
            scanf(" %c", &input);
            switch (input)
            {
            case '1':
                initiateNewElection();
                saveElectionInfoInFile();
                createCandidateFiles();
                break;
            case '2':
                loadElectionInfoFromFile();
                break;
            case '3':
                WinnerCid = getWinner();
                if (WinnerCid != -1)
                {
                    printf("\nWinner is %s with %d votes\n", candidateArray[WinnerCid - 1].cname, candidateArray[WinnerCid - 1].votes);
                }
                else
                {
                    printf("\nIts A TIE");
                }
                printf("\nFull Result\n");
                for (int i = 0; i < numberOfCandidates; i++)
                {
                    totalVotedNow += candidateArray[i].votes;
                    printf("%d. %s -> %d votes\n", candidateArray[i].cid, candidateArray[i].cname, candidateArray[i].votes);
                }
                printf("\nVoting Percentage: %d %%\n\n", (totalVotedNow * 100) / currentValidID.totalVoters);
                break;
            case '4':
                return;
            default:
                printf("Invalid Option");
            }
        }
    }
};