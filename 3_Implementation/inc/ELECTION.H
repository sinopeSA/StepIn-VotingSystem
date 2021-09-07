/**
 * @file ELECTION.H
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
//#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct currentValidID
{
    int year;
    char branch[6];
    int totalVoters;
};
typedef struct candidate
{
    int cid;
    char cname[20];
    int votes;
} CANDIDATE;

//GLOBALS --------------------------------------------------------
struct currentValidID currentValidID; //stores current Valid user ID parameters
CANDIDATE candidateArray[20];         //to store information all candidates
int numberOfCandidates;               //Total number of candidates standing for election
char studentVotes[200];               //to store information of votes given by each student
//----------------------------------------------------------------

//To extract year from userID -- For example, userID:2018btecs00064 year:2018
int extractYear(char userID[15])
{
    int year = 0;
    char tmp;
    for (int i = 0; i < 4; i++)
    {
        tmp = userID[i];
        year = (year * 10) + (tmp - 48);
    }
    return year;
}

int extractRollNo(char userID[15])
{
    int rollno = 0;
    char tmp;
    for (int i = 9; i < 14; i++)
    {
        tmp = userID[i];
        rollno = (rollno * 10) + (tmp - 48);
    }
    return rollno;
}

//Will check whether the global branch code and inputed branch code is matching or not
int checkBranchCode(char userID[15])
{
    char branchCode[6];
    for (int i = 4; i < 9; i++)
    {
        branchCode[i - 4] = userID[i];
    }
    branchCode[5] = '\0';
    if (strcmp(branchCode, currentValidID.branch) == 0)
        return 1;
    else
        return 0;
}

int authenticateAdmin()
{
    char username[15], password[6];

    printf("\nEnter username: ");
    scanf("%s", username);
    if ((strcmp(username, "Admin")) != 0)
        return 0;
    else
    {
        printf("Enter Password: ");
        scanf("%s", password);
        if ((strcmp(password, "admiN")) != 0)
            return 0;
    }
    return 1;
}
void createCandidateFiles()
{
    printf("\nCreating candidate files...\n");
    FILE *fp;
    char filename[20];
    for (int i = 1; i <= numberOfCandidates; i++)
    {
        sprintf(filename, "candidate%d.txt", i);
        fp = fopen(filename, "w");
        fprintf(
            fp, "0\n%s",
            candidateArray[i - 1].cname);
        fclose(fp);
    }
    printf("Created Files successfully\n");
}

int getWinner()
{
    int maxV = -1;
    int winnerCid;
    for (int i = 0; i < numberOfCandidates; i++)
    {
        if (candidateArray[i].votes > maxV)
        {
            winnerCid = candidateArray[i].cid;
            maxV = candidateArray[i].votes;
        }
        else if (candidateArray[i].votes == maxV)
        {
            return -1;
        }
    }
    return winnerCid;
}

void initiateNewElection()
{
    printf("\nNew Election Initiation:\n");

    printf("\nElections for which Year: ");
    scanf("%d", &currentValidID.year);
    printf("Enter branch code:");
    scanf("%s", currentValidID.branch);
    printf("Enter max roll no.:");
    scanf("%d", &currentValidID.totalVoters);
    printf("Enter the no. of candidates:");
    scanf("%d", &numberOfCandidates);

    for (int i = 0; i < currentValidID.totalVoters; i++)
    {
        studentVotes[i] = '0';
    }

    for (int i = 0; i < numberOfCandidates; i++)
    {
        candidateArray[i].cid = i + 1;
        printf("Enter name of candidate %d: ", i + 1);
        scanf(" %s", candidateArray[i].cname);
        candidateArray[i].votes = 0;
    }
    return;
}

void saveElectionInfoInFile()
{
    printf("Saving Election Info in File...\n");
    FILE *fp = fopen("ElectionInfo.txt", "w");
    if (fp == NULL)
    {
        printf("\nError in file creation\n");
        fclose(fp);
        return;
    }
    fprintf(
        fp, "%d\n%s\n%d\n%d",
        currentValidID.year,
        currentValidID.branch,
        currentValidID.totalVoters,
        numberOfCandidates);
    fclose(fp);
    printf("Saved Successfully : )");
}

void loadElectionInfoFromFile()
{
    FILE *f1, *f2, *f3;
    f1 = fopen("ElectionInfo.txt", "r");
    if (f1 == NULL)
        printf("Not Exist");
    fscanf(f1, "%d", &currentValidID.year);
    fseek(f1, 2, SEEK_CUR);
    fscanf(f1, "%s", currentValidID.branch);
    fseek(f1, 2, SEEK_CUR);
    fscanf(f1, "%d", &currentValidID.totalVoters);
    fseek(f1, 2, SEEK_CUR);
    fscanf(f1, "%d", &numberOfCandidates);
    fclose(f1);

    //load candidates info and student votes
    for (int i = 0; i < currentValidID.totalVoters; i++)
    {
        studentVotes[i] = '0';
    }
    for (int i = 1; i <= numberOfCandidates; i++)
    {
        int location;
        char filename[20];
        sprintf(filename, "candidate%d.txt", i);
        f2 = fopen(filename, "r+");
        candidateArray[i - 1].cid = i;
        fscanf(f2, "%d", &candidateArray[i - 1].votes);
        fscanf(f2, "%s", candidateArray[i - 1].cname);
        while (!feof(f2))
        {
            fscanf(f2, "%d", &location);
            studentVotes[location - 1] = i + 48;
        }
        fclose(f2);
    }
}

int isValid(char userID[15])
{
    if (strlen(userID) != 14)
        return 0;

    int inputedYear = extractYear(userID);
    int inputedRollNo = extractRollNo(userID);

    if (inputedYear != currentValidID.year || checkBranchCode(userID) != 1 || inputedRollNo > currentValidID.totalVoters)
        //prinft("Something is Wrong, try again");
        return 0;

    return 1;
}

void saveVote(char userID[15], int voteInput)
{
    char filename[20];
    sprintf(filename, "candidate%d.txt", voteInput);
    FILE *fp = fopen(filename, "r+");
    int location = extractRollNo(userID);
    studentVotes[location - 1] = voteInput;
    candidateArray[voteInput].votes++;
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "%d\n", candidateArray[voteInput].votes);
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "\n%d", location);
    fclose(fp);
}