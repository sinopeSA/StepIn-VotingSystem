/**
 * @file panel.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/ELECTION.c"

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

void studentPanel()
{
    char userID[15];
    int voteInput;
    while (1)
    {
        printf("\n\n  To exit press 0");
        printf("\n  Enter user ID:");
        scanf("%s", userID);
        if (strcmp(userID, "0") == 0)
            return;
        if (isValid(userID) != 1)
        {
            continue;
        }

        /*
        if (isBanned(userID) != 0)
        {
            printf("\nThis User ID is currently banned...\nContact Admin for the reason...(Press Enter to continue)");
            getch();
            continue;
        }

        
        if (isVoted(userID) != 0)
        {
            printf("\n  Your PRN entered is already voted\n  Contact Admin for furthur query");
            getch();
            continue;
        }
    */

        printf("\n\n  Candidates for election:");
        for (int i = 0; i < numberOfCandidates; i++)
        {
            printf("\n  %d. %s", i + 1, candidateArray[i].cname);
        }
        printf("\n\n  Your Vote(Enter Number):");
        scanf("%d", &voteInput);
        if (voteInput < 1 || voteInput > numberOfCandidates)
        {
            printf("\nInvalid Vote\nTry Again...");
            scanf("%d", &voteInput);
            continue;
        }
        saveVote(userID, voteInput);
        printf("\n\nThanks for your precious vote.");
    }
};