# REQUIREMENTS
## Introdction:
   
    Voting System Application  helps in casting and calculating the votes. This application has 2 different section.
    
        1. Student Section (Panel)
        2. Admin Section (Panel)
        3. Exit( system Exit)
   
    Evolving from pen paper based election to Digital casting of election has made it easy to keey the tract on the number of votes, counting and recognising the duplicate votes or illegal votes.<br>
    The Voting system can be used for varoius purpose.<br>
    Here the system designed is only for Eductional institude election level.

## Research:
- Manual Pen Paper voting is time consuming process
- Manual counting usally takes alot of time and resourses
- Understanding the difficultly of illegal votes is tough.
- Electronic based voting helps in saving the resoures and is eco friendly
- Electronic based voting is fast and easy.

## Defining of the Application:
- The Proposed system ensures the complete freedom to users,<br> this allows to tract the illegal votes and get detailed information about  each candidates and there votes.<br>
-  This system ensures that only registered students are allowed to vote.
    
## objective:
    The main objective of this Project is:
        1. To Allow the user to cast there own vote.
        2. To Create Election and execute the election.
        3. To Allow the application to decide the winner.
   
## SWAT Analysis:
### Strenght:
- User can cast vote to desired canidate.
- Application is a multi-platfrom application.
  
### Weakness:
- No Encryption
- Limited to serial registered students
- Limited to Branch Eductaional Institute.

### Oppurtinities:
- UI can be made better by using mark-up languages.
- Addtional functions such as candidate profile can be added.
- Addtional functions such as Check banned students, check duplicate votes, remove votes when system fails can be added.
  
## 4W's and 1 H:
    
    1. WHO:
        Anyone one who wants to conduct election can use this Application.
    
    2. WHAT:
        This Application uses file read write and count method to store and process elections.
    
    3. WHEN:
        This project can be used by Educational Institutes for choosing best from the list of candidates.
    
    4. WHY:
        As this project is better than pen paper election, plus results are computrized.
    
    5. HOW:
        Implemented using Structure and file read write functions of C programs.
        To run this particular application one must have:
            1. GCC compiler.
            2. Any operating system (preffered Windows or Linux).

## Functional Requirements:
### High Level Requirements:
1. The System must allow the Admin to login.
2. The system must allow the Admin to create new election.
3. The System must allow the Admin to add candidates to Election.
4. The system must allow the Admin to check Election results.
5. The system must allow the voters(student) to cast there vote based on the Registered student ID.
6. The system must allow the students to choose the candidates from the avaliable list.
7. The system must generate canidate election files.
8. The system must allow the admin to logout.

### Low Level Requriments:
|LLR.No|Deatils|Dependency|
|------|-------|----------|
|LLR-1| System must check the credintials of the Admin user|FR-1,FR-8|
|LLR-2|create New Election|FR-1,FR-2|
|LLR-3|Check Election data|FR-1,FR-2,FR-3,FR-4|
|LLR-4|Get Election Result|FR-1,FR-2,FR-3,FR-4|
|LLR-5|Add Candidates|FR-1,FR-2,FR-3|
|LLR-6|cast vote|FR-5,FR-2,FR-3|
|LLR-7|choose candidate|FR-5,FR-2,FR-3,FR-4|

## Non-Functional Requriments:
1. The system should be Smooth, user friendly and must be secured.
2. The system should be Reliable
3. The system should be portable, hence supportable.
4. The system should be easy to maintain.

## Gantt Chart:
![Gantt Chart](/1_Requirements/Gantt_chart.jpg)
